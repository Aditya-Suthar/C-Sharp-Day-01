#for even numbers print till input

def main ():
    x = inp()
    even(x)

def inp():
    x = int(input("Enter value of n"))
    return x

def even(n):
    if (n % 2 == 0):
        j = 0
        while ( j <= n):
            print (j)
            j = j+2
    else:
        k = 0
        while ( k < n):
            print (k)
            k = k+2
main()