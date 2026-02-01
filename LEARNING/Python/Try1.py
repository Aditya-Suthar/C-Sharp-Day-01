def main():

    n = inp()
    add = fun(n)
    display(add)

def inp():
    n = int(input("Enter the value of n"))
    return n
    

def fun(n):

    if n == 0:
        return 0
    
    else:
        return (n + fun(n-1))

def display(add):
    print (add)


main()