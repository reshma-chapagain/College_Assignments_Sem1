import sqlite3

conn = sqlite3.connect('college.sqlite3')

mycur = conn.cursor()

def create_table():
    mycur.execute("""
    CREATE TABLE IF NOT EXISTS students(
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        name TEXT NOT NULL,
        email TEXT NOT NULL,
        address TEXT
    )
""")
    conn.commit()
    print("Table created successfully.")
    
create_table()

conn.commit()
conn.close()
