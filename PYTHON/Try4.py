#Printing prime numbers

def main ():

    n = inp_num()
    prime_num(n)

def inp_num():
    n = int(input ("Enter the value of n"))
    return n

def prime_num(n):
    
    for i in range (2,n):
        count = 0
        j = 2    
        while j<=i-1:
                if i % j == 0:
                    count = 1
                    j = j+1
                else:
                    j = j+1
        
        if count != 1:
            print (i)
    
main()



