print("KTM Ring Road Fare Calculator")

start_place = "Kalimati"

print("Starting place:", start_place)

print("\nDestinations:")
print("1. Balaju (5 km)")
print("2. Chabahil (10 km)")
print("3. Koteshwor (15 km)")
print("4. Satdobato (20 km)")
print("5. Thankot (25 km)")
print("6. Kalanki (30 km)")

choice = int(input("Select destination (1-6): "))

if choice == 1:
    distance = 5
    place = "Balaju"
elif choice == 2:
    distance = 10
    place = "Chabahil"
elif choice == 3:
    distance = 15
    place = "Koteshwor"
elif choice == 4:
    distance = 20
    place = "Satdobato"
elif choice == 5:
    distance = 25
    place = "Thankot"
elif choice == 6:
    distance = 30
    place = "Kalanki"
else:
    print("Invalid choice")
    exit()

fare = (distance // 5) * 15

print("\n----- DETAILS -----")
print("From:", start_place)
print("To:", place)
print("Distance:", distance, "km")
print("Fare: Rs", fare)
