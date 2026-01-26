students=[
     {'name':'ram','gender':'male','status':True},
     {'name':'hari','gender':'male','status':False},
     {'name':'sita','gender':'female','status':True},
     {'name':'rita','gender':'female','status':True},
     {'name':'laxmi','gender':'female','status':False},
 ]

total_user = 0
total_active_user = 0
total_inactive_user = 0
total_active_male = 0
total_active_female = 0
total_inactive_male = 0
total_inactive_female = 0

x = 0
while x < len(students):

    total_user += 1

    if students[x]['status'] == True:
        total_active_user += 1

        if students[x]['gender'] == 'male':
            total_active_male += 1
        else:
            total_active_female += 1

    else:
        total_inactive_user += 1

        if students[x]['gender'] == 'male':
            total_inactive_male += 1
        else:
            total_inactive_female += 1

    x += 1

print("Total Users:", total_user)

print("Total Active Users:", total_active_user)
print("Total Inactive Users:", total_inactive_user)

print("Total Active Male Users:", total_active_male)
print("Total Active Female Users:", total_active_female)

print("Total Inactive Male Users:", total_inactive_male)
print("Total Inactive Female Users:", total_inactive_female)


students = [
    {'username':'admin','password':'admin123'},
    {'username':'gopal','password':'gopal123'},
    {'username':'rita','password':'rita123'},
]

username = input("Enter username: ")
password = input("Enter password: ")

x = 0
found = False

while x < len(students):

    if students[x]['username'] == username and students[x]['password'] == password:
        print("Welcome", username)
        found = True
        break

    x += 1

if found == False:
    print("Invalid user")
