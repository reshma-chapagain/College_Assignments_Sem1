import sqlite3

con = sqlite3.connect('college.sqlite3')
mycur = con.cursor()

mycur.execute("""
    CREATE TABLE IF NOT EXISTS colleges(
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        name TEXT
    )
""")

con.commit()
con.close()
