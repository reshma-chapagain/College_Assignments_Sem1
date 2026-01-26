#show message welcome blah blah then 1.dell rs 20000 2. toshiba rs 30000 3.hp rs 25000 then select option after selecting enter quantity might be multiple quantities 
#then delivery options 1. home 1000 2. pickup free
#then packing 1. plastic bag rs 1000 2. bag rs 2000 3. gift box rs 5000 4. none

print("Welcome to Laptop Store")
print("-" * 30)

# Customer details
name = input("Enter your name: ")
phone = input("Enter your phone number: ")

# Products
print("\nProducts:")
print("1. Dell     Rs 20000")
print("2. Toshiba  Rs 30000")
print("3. HP       Rs 25000")

product_choice = int(input("Select product (1-3): "))

if product_choice == 1:
    product_name = "Dell"
    price = 20000
elif product_choice == 2:
    product_name = "Toshiba"
    price = 30000
elif product_choice == 3:
    product_name = "HP"
    price = 25000
else:
    print("Invalid product choice")
    exit()

quantity = int(input("Enter quantity: "))
product_total = price * quantity

# Delivery
print("\nDelivery Options:")
print("1. Home Delivery  Rs 1000")
print("2. Pickup         Free")

delivery_choice = int(input("Select delivery option (1-2): "))

if delivery_choice == 1:
    delivery_charge = 1000
else:
    delivery_charge = 0

# Packing
print("\nPacking Options:")
print("1. Plastic Bag  Rs 1000")
print("2. Bag          Rs 2000")
print("3. Gift Box     Rs 5000")
print("4. None         Free")

packing_choice = int(input("Select packing option (1-4): "))

if packing_choice == 1:
    packing_charge = 1000
elif packing_choice == 2:
    packing_charge = 2000
elif packing_choice == 3:
    packing_charge = 5000
else:
    packing_charge = 0

# Location & Tax
print("\nLocation:")
print("1. KTM (13% tax)")
print("2. BKT (No tax)")
print("3. Lalitpur (Tax on original price only)")

location_choice = int(input("Select location (1-3): "))

if location_choice == 1:
    tax = product_total * 0.13
elif location_choice == 2:
    tax = 0
elif location_choice == 3:
    tax = price * 0.13
else:
    print("Invalid location")
    exit()

# Final calculation
grand_total = product_total + delivery_charge + packing_charge + tax

# Bill
print("\n--------- BILL ---------")
print("Name:", name)
print("Phone:", phone)
print("Product:", product_name)
print("Quantity:", quantity)
print("Product Total: Rs", product_total)
print("Tax Amount: Rs", tax)
print("Delivery Charge: Rs", delivery_charge)
print("Packing Charge: Rs", packing_charge)
print("------------------------")
print("Grand Total: Rs", grand_total)
print("Thank you for shopping")
