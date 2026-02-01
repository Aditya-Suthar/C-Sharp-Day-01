def inp():
    n = int(input("Enter the value of n:"))
    return n

def fib(n):
    if (n==1 or n==0):
        return 0
    elif (n==2):
        return 1
    elif (n>2):
        return fib(n-1)+fib(n-2)

def main ():

    n = inp()
    for i in range (1,n+1):
        print(fib(i))

main ()
    