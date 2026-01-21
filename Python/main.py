print("Hello World!!")


name = 'ram'
age = 23
print(type(name))
print()


#Data Types in PYthon
#1. int
num1 = 10
print(type(num1))   

#2. float
num2 = 10.5
print(type(num2))       

#3. string
str1 = "Hello"
print(type(str1))   

#4. boolean
bool1 = True
print(type(bool1))
bool2 = False
print(type(bool2))

data = [1, 2.5, "Python", True, None] 
print(data)
print(data[-1])


data2=[
    [99, 67, [[[98], 9000]], 12, 13]
]

print(data2[0] [2] [0] [0] [0]) 
print(data2[0] [2] [0]  [1])

data3 = {
    'name': 'ram',
    'age': 23,
}
print(data3['name'])
print(data3['age'])

data4 = ['raaaam' , 'haaarriii']
data4.append('gopis')
#print(dir(data4))
print(data4)

a = input("Enter a number: ")
print(a)

