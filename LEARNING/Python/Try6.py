#checking via recursion

def main ():
    x = GetNum()
    digits = CountDigits(x)
    y = Palindrome(digits,x)
    Check(x,y)

def GetNum():
    x = int(input("Enter the value of x:-"))
    return x

def CountDigits(x):
    x = abs(x)
    if (x==0):
        return 0

    else :
        return 1 + CountDigits(x//10)

def Palindrome(digits,x):

    if x//10 == 0:
        return x
    else:
        return Palindrome(digits-1,x//10) + (x%10)*pow(10,digits-1)

def Check(x,y):
    if   x<0:
        print("Not palindorme")
    
    elif x==y:
        print ("Yes palindrome")
        
    else:
        print ("Not palindrome")

main()