def main():

    x = get_number()
    new_num = fun_arm(x)
    ArmStrong(x,new_num)


def get_number():
     x = int (input("Enter the value of x?"))
     return x


def fun_arm(n):
    
    if n==0:  
        return 0
    
    else:
        return fun_arm(n//10) + pow(n%10,3)

def ArmStrong(x,new_num):

    if (x==new_num):
        print("Yes it is armstrong number")

    else:
        print ("No it is not a armstrong number")

main()


    
