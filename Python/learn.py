import tkinter as tk

app = tk.Tk()
app.title("GUI Calculator")
app.geometry("400x400")

#to write text
myText1 = tk.Label(app, text= "Hello World!")
myText2 = tk.Label(app, text= "123456")
myText3 = tk.Label(app, text = "abc@gmail.com")
myText1.pack()
myText2.pack()
myText3.pack()

#button
def user():
    print("Hello World")
    
btn = tk.Button(app, text = "Click Me" , command=user)
btn.pack()

#enter name and email
name = tk.Entry(app)
name.pack()
email = tk.Entry(app)
email.pack()

def user2():
    print("Hello", name.get())
    print("hyyyy", email.get())

btn = tk.Button(app,text="Sumbit", command=user2)
btn.pack()

#scrreen responsivness row col

screen = tk.Entry(app)
screen.grid(row=0,column=0)

one = tk.Button(app, text="1")
one.grid(row=1,column=2)

one = tk.Button(app, text="1")
one.grid(row=1,column=3)

ps = tk.Button

app.mainloop()


#what is oop 
#what is object, class, inheritance