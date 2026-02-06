#selection sort

n = int(input("Enter the number of elements:-"))

arr = []

for i in range (0,n):
    x = int(input(f"Enter the element no {i}:-"))
    arr.append(x)

# to check
print ("Unsorted array:-",arr)

#selection sort algorithm

i = 0
j = i+1

for i in range (0,n):
    min = arr[i]
    pos = i
    for j in range (i,n):
        if ( arr[j] < min):
            min = arr[j]
            pos = j
        #swap arr[pos] and arr[i]
    arr[pos] , arr[i] = arr[i] , arr[pos]
        
print (arr) #final array


