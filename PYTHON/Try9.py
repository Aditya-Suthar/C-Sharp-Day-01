#HCF/GCD of a number

def main ():
    x = GetNumber()
    y = GetNumber()
    max = HCF(x,y)
    print (max)

def GetNumber():
    a = int(input())
    return a

def HCF (x,y):
    if y == 0:
        return x
    return HCF(y,x%y)

main()

