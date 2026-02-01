#count how many digits in a number
def main ():
    x = GetNumber()
    digit = CountDigits(x)
    Print(digit)

    
def GetNumber():
    x = int (input ("Enter the value here:-"))
    return x
    
def CountDigits(x):
    x = abs(x)
    if (x==0):
        return 0

    else :
        return 1 + CountDigits(x//10)
    
def Print(digit):
    print ("Total digits are:-",digit)

main()