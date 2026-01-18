# To find the STRONG NUMBER :- if factorial sum ==  number

def main ():
    x = GetNumber()
    y = FacSum(x)
    Check(x,y)

def GetNumber():
    x = int(input("Enter number:"))
    if x<0:
        print ("Dont try to be smart")
        return GetNumber()
    else:
        return x

def Fac(x):
    if x == 0:
        return 1
    else:
        return x*Fac(x-1)

def FacSum(x):
    if x== 0:
        return 0
    return FacSum(x//10) + Fac(x%10)

def Check(x,y):
    if x==y:
        print ("STRONG NUMBER")
    else:
        print ("NOT A STRONG NUMBER")
main ()