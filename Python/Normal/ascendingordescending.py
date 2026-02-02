#Wap to show output in ascending order
x = int(input("Enter first number: "))
y = int(input("Enter second number: "))
z = int(input("Enter third number: "))
if x<y and x<z:
    if y<z:
        print("Ascending order:",x,y,z)
    else:
        print("Ascending order:",x,z,y)