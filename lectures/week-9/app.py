from flask import Flask, render_template, request

app = Flask(__name__)


@app.route("/", methods=["GET", "POST"])  # home route
def index():
    if request.method == "POST":
        # Form was submitted (i.e only way is through the form)
        return render_template("greet.html", name=request.form.get("name", "world"))
    else:
        # no submission, so show form/homepage
        return render_template("index.html")
