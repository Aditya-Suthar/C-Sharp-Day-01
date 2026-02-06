n = int(input("Enter the number of elements:-"))
arr = []

for i in range(0,n):
    x = int(input(f"Enter element {i}:-"))
    arr.append(x)
    
print(arr)


#for finding the sum:-

sum = 0

for i in range(0,n):
    sum = sum + arr[i]

print(sum)