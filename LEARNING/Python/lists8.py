#insertion sort

n = int(input("Enter the number of elements:-"))

arr = []

#inserting the elements inside the lists
for i in range (0,n):
    x = int(input(f"Enter the value of element no.{i+1}:-"))
    arr.append(x)

print ("Unsorted Array:-",arr)

#  starting of the algorithm of insertion sort as studied in C DSA


for i in range (1,n):
    temp = arr[i]
    j = i-1
    while( j>=0 and temp < arr[j]):
            #shifting elements towards the right
        arr[j+1] = arr[j]
        j = j-1
        #empty wala getting replaced with the temp variable which is the arr[i]
    arr[j+1] = temp

#printing the final sorted array:-

print ("Sorted Array:-",arr)
