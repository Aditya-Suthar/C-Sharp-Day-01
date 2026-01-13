n = int (input("Enter value of n"))

i=1
while (i<=n):
    if i%3 == 0 and i%5 == 0:
        print ("FizzBuzz",i)
    elif i%3 == 0:
        print ("Fizz",i)
    elif i%5 == 0:
        print ("Buzz",i)
    else:
        print (i)
    i = i+1
