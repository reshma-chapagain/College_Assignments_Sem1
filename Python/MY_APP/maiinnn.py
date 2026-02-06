from flask import Flask, redirect, render_template, request
import sqlite3

app = Flask(__name__)

def get_db_connection():
    conn = sqlite3.connect('school.db', check_same_thread=False)
    return conn

def create_table():
    conn=sqlite3.connect('school.db', check_same_thread=False) # Connect to the database (or create it if it doesn't exist)
    mycursor=conn.cursor()
    mycursor.execute('''CREATE TABLE IF NOT EXISTS students
                     (id integer primary key autoincrement, name text not null, email text unique, address text)
                     ''')
    conn.commit()
    print("Table created successfully")
    conn.close()

create_table()
@app.route('/')
def index():
    conn = sqlite3.connect('school.db', check_same_thread=False)

    
    mycursor = conn.cursor()
    res = mycursor.execute("SELECT * FROM students")
    students = res.fetchall()
    print(list(enumerate(students)))
    conn.close()
    return render_template('index.html', students=students)

@app.route('/about')
def about():
    return render_template('about.html')

@app.route('/contact')
def contact():
    return render_template('contact.html')

@app.route('/gallery')
def gallery():
    return render_template('gallery.html')

@app.route('/services')
def services():
    return render_template('services.html')

@app.route('/news')
def news():
    return render_template('news.html')

@app.route('/add-record', methods=['GET', 'POST'])
def add_record():
    if request.method == 'POST':
        name = request.form['name']
        email = request.form['email']
        address = request.form['address']
        
        conn=sqlite3.connect('school.db', check_same_thread=False)
        mycursor=conn.cursor()
        mycursor.execute("INSERT INTO students (name, email, address) VALUES (?, ?, ?)", (name, email, address))
        conn.commit()
        conn.close()
        
        return "Record added successfully!"
    return render_template('add-record.html')

@app.route('/delete/<int:id>')
def delete_record(id):
    conn = sqlite3.connect('school.db', check_same_thread=False)
    cursor = conn.cursor()
    cursor.execute("DELETE FROM students WHERE id=?", (id,))
    conn.commit()
    return redirect('/')

@app.route('/edit/<int:id>', methods=['GET', 'POST'])
def edit_record(id):
    conn = sqlite3.connect('school.db', check_same_thread=False)
    cursor = conn.cursor()
    cursor.execute("SELECT * FROM students WHERE id=?", (id,))
    student = cursor.fetchone()
    if request.method == 'POST':
        name = request.form['name']
        email = request.form['email']
        address = request.form['address']
        cursor.execute("UPDATE students SET name=?, email=?, address=? WHERE id=?", (name, email, address, id))
        conn.commit()
        return redirect('/')
    else:
        return render_template('edit-record.html', student=student)



if __name__ == '__main__':
    create_table()
    app.run(debug=True)