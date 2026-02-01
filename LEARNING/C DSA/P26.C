#include <stdio.h>

struct number
{
    int real;
    int img;
}c1,c2,sum_c,sub_c;

int main()
{


    int option;

    do
    {
        printf ("\n ******MAIN MENU******");
        printf ("\n 1. Read the complex numbers");
        printf ("\n 2. Display the complex numbers");
        printf ("\n 3. Add the complex numbers");
        printf ("\n 4. Subtract the complex numbers");
        printf ("\n 5. Exit");

        printf ("\n Enter your option:-");
        scanf ("%d",&option);

        switch (option)
        {
            case 1:
                printf ("\n Enter the real and img parts of first complex numbers:");
                scanf ("%d %d",&c1.real,&c1.img);

                printf ("\n Enter the real and img parts of second complex numbers:");
                scanf ("%d %d",&c2.real,&c2.img);

                break;

            case 2:
                printf ("\n The first complex number is : %d+%di",c1.real,c1.img);
                printf ("\n The second complex number is: %d+%di",c2.real,c2.img);
                break;

            case 3:
                sum_c.real = c1.real + c2.real;
                sum_c.img  = c1.img  + c2.img;

                printf ("\n The sum of two complex numbers is: %d+%di",sum_c.real,sum_c.img);
                break;

            case 4:
                sub_c.real = c1.real - c2.real;
                sub_c.img  = c1.img  - c2.img;

                printf ("\n The difference of two complex numbers is: %d+%di",sub_c.real,sub_c.img);
                break;
        }

    }while (option !=5);

    return 0;

}
