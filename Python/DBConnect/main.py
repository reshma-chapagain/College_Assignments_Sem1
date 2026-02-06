import mysql.connector

cnx = mysql.connector.connect(
    host="localhost",
    user="root",
    password="Apple",
    database="products"
)
print("connected")

cur = cnx.cursor()

# Show books table
cur.execute("SELECT * FROM books")
books_data = cur.fetchall()

print("\n📚 Books in database:")
if books_data:
    for book in books_data:
        print(book)
else:
    print("No books found!")