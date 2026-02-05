x = input("Enter the martial status:-")
y = input("Enter the gender:-")
z = int(input("Enter the age:-"))

if (x == "married"):
    print("Insured")

elif (x == "unmarried" and y == "male" and z == 30):
    print("Insured")

elif (x == "unmarried" and y == "female" and z == 25):
    print("Insured")

else:
    print("Not insured")