#call itself

#no end in this
#def message():
#    print("Helllooo")
#    message()

#message()    mainly for factorials

def fac(n):
    if n==1:
        return 1
    return n*fac(n-1)

print(fac(5))


def add(x,y) :
    return x+y

total   = add(7,8)
print(total)


#single line 
acv = lambda x,y: x+y
print(acv(3,4))
 