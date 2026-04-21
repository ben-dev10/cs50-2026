from cs50 import SQL
from flask import Flask, request, redirect, render_template

app = Flask(__name__)

db = SQL("sqlite:///froshims.db")
SPORTS = ["Soccer", "Basketball", "Ultimate Frisbee"]


@app.route("/")
def index():
    return render_template(
        "index.html", sports=SPORTS
    )  # sports is a variable passed to html file


@app.route("/deregister", methods=["POST"])
def deregister():
    id = request.form.get("id")
    if id:
        db.execute("DELETE FROM registrants WHERE id = ?", id)
    return redirect("/registrants")


@app.route("/register", methods=["POST"])
def register():
    # validate user's name
    name = request.form.get("name")
    if not name:
        return render_template("error.html", message="Missing name")

    # validate sport
    sports = request.form.getlist("sport")
    if not sports:
        return render_template("error.html", message="Missing sports")
    for sport in sports:
        if sport not in SPORTS:
            return render_template("error.html", message="Invalid Sport")

    # remember student
    for sport in sports:
        db.execute("INSERT INTO registrants (name, sport) VALUES(?, ?)", name, sport)

    # confirmed
    return redirect("/registrants")


@app.route("/registrants")
def registrants():
    registrants = db.execute("SELECT * FROM registrants")
    return render_template("registrants.html", registrants=registrants)
