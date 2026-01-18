#finding sum of digits


def main ():
    x = GetNumber()
    add = SumDigits(x)
    Display(add)


def GetNumber():
    x = int (input("Enter the value of x:"))
    return x

def SumDigits(x):
    x = abs(x)
    if x//10 == 0:
        return x
    else:
        return x%10 + SumDigits(x//10)
    
def Display(add):

    print(add)

main ()