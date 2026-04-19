from cs50 import SQL

db = SQL("sqlite:///favourites.db")

favorite = input("Favourites: ")

# the question mark ? is used as a placeholder for the second favorite parameter, that would be sanitized before
# injected into the query string
rows = db.execute(f"SELECT COUNT(*) AS n FROM favourites WHERE problem = ?", favorite) 

row = rows[0]

print(row["n"])