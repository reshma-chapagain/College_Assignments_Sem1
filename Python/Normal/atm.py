print("Welcome to ATM ")
print("-" * 25)

balance = 100000
pin = 1234

user_pin = int(input("Enter your PIN: "))

if user_pin != pin:
    print("Incorrect PIN. Access denied.")
    exit()

print("\nLogin successful!")

while True:
    print("\nATM Menu:")
    print("1. Balance Enquiry")
    print("2. Withdraw Amount")
    print("3. Exit")

    choice = int(input("Select option (1-3): "))

    if choice == 1:
        print("Your current balance is: Rs", balance)

    elif choice == 2:
        amount = int(input("Enter amount to withdraw: "))

        if amount <= 0:
            print("Invalid amount")

        elif amount > balance:
            print("Insufficient balance")

        else:
            balance -= amount
            print("Please collect your cash ")
            print("Remaining balance: Rs", balance)

    elif choice == 3:
        print("Thank you for using ATM ")
        break

    else:
        print("Invalid choice, try again")
