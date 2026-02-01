# printing all odd numbers till n

def main():
    n = inp()
    odd(n)

def inp():
    n = int(input("Enter value of n"))
    return n

def odd(n):
    if n % 2 == 0:
        j = 1
        while (j<n):
            print (j)
            j = j+2
    else:
        k = 1
        while (k<=n):
            print (k)
            k = k+2
main ()