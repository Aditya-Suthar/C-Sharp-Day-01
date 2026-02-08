#merging sort 

def mergesort(arr,start,end):
    if start >= end:
        return
    else:
        mid = (start+end)//2

        mergesort(arr,start,mid) #for first sublist
        mergesort(arr,mid+1,end) #for second sublist

        merge(arr,start,mid,end)

def merge(arr,start,mid,end):
    temp = []
    i = start
    j = mid+1

    while (i<=mid and j<=end):
        if(arr[i] < arr[j]):
            temp.append(arr[i])
            i = i+1
        else:
            temp.append(arr[j])
            j = j+1

    while (i<=mid):
        temp.append(arr[i])
        i = i+1

    while (j<=end):
        temp.append(arr[j])
        j = j+1

    print(temp)
    

def main():
    n = int(input("Enter the number of elements:- "))

    arr = []

    for i in range (0,n):
        x = int(input(f"Enter the value of element no. {i}"))
        arr.append(x)

    print ("Unsorted Array:-",arr)

    start = 0
    end = n-1

    mergesort(arr,0,n-1)

main()