'''SyntaxErrors:- Must be fixed by user'''

''' Value Error:- Wrong data type input'''
#x = int(input("What's X?"))
#print (f"x is {x}")
 
''' Using Try and Except '''
while True:

    try:
        x = int(input("What's X?"))
    except ValueError:
        print("X is not an integer")
    else:
        break
    
print(f"x is {x}")


