# favourites.py: 4a
from cs50 import SQL

db = SQL("sqlite:///favourites.db")

rows = db.execute(
    "SELECT language, COUNT(*) AS n FROM favourites GROUP BY language ORDER BY n DESC"
)

for row in rows:
    print(row["language"], row["n"])
