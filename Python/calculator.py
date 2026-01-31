import tkinter as tk

app = tk.Tk()
app.title("GUI Calculator")
app.geometry("300x300")

screen = tk.Entry(app, width=30, font=("Arial" , 14))
screen.grid(row=0,column=0,padx=15,pady=10,columnspan=4)
    

def get_value(value):
    screen.insert(tk.END,value)

def result():
    old = screen.get()
    res = eval(old)
    screen.delete(0,tk.END)
    screen.insert(0,res)

#Numeric Values
one = tk.Button(app, text="1", command=lambda:get_value(1), width=5 , padx=15,pady=15)
one.grid(row=3,column=0)

two = tk.Button(app, text="2", command=lambda:get_value(2), width=5 , padx=15 ,pady=15 )
two.grid(row=3,column=1)

three = tk.Button(app, text="3", command=lambda:get_value(3), width=5 ,padx=15, pady=15)
three.grid(row=3,column=2)

four = tk.Button(app, text="4", command=lambda:get_value(4),width=5, padx=15 , pady=15)
four.grid(row=2,column=0)

five = tk.Button(app, text="5", command=lambda:get_value(5), width=5 , padx=15 , pady=15)
five.grid(row=2,column=1)

six = tk.Button(app, text="6", command=lambda:get_value(6), width=5, padx=15, pady=15)
six.grid(row=2,column=2)

seven = tk.Button(app, text="7", command=lambda:get_value(7), width=5, padx=15, pady=15)
seven.grid(row=1,column=0)

eight = tk.Button(app, text="8", command=lambda:get_value(8), width=5, padx=15, pady=15)
eight.grid(row=1,column=1)

nine = tk.Button(app, text="9", command=lambda:get_value(9), width=5, padx=15, pady=15)
nine.grid(row=1,column=2)


zero = tk.Button(app, text="0", command=lambda:get_value(0), width=5, padx=15, pady=15)
zero.grid(row=4,column=1)


#Arithemetic Operators

dot = tk.Button(app, text= ".", command=lambda:get_value("."), width=5, padx=15, pady=15)
dot.grid(row=4, column=0)


ps = tk.Button(app, text= "+", command=lambda:get_value("+"), width=5, padx=15, pady=15)
ps.grid(row=1, column=3)

sub = tk.Button(app, text= "-", command=lambda:get_value("-"), width=5, padx=15, pady=15)
sub.grid(row=2, column=3)

div = tk.Button(app, text= "/", command=lambda:get_value("/"), width=5, padx=15, pady=15)
div.grid(row=3, column=3)

mult = tk.Button(app, text= "*", command=lambda:get_value("*"), width=5, padx=15, pady=15)
mult.grid(row=4, column=2)

eql = tk.Button(app,text="=", command=result, width=5, padx=15, pady=15)
eql.grid(row=4, column=3)

app.mainloop()