#include <stdio.h>

struct student {
    int roll_no;
    char name[80];
    float fees;
    char DOB[80];
}stud1;

int main()
{
    printf ("\n Enter the roll number :- ");
    scanf ("%d", &stud1.roll_no);

    printf ("\n Enter the name:-");
    scanf (" %[^\n]", stud1.name);

    printf ("\n Enter the fees:-");
    scanf ("%f", &stud1.fees);

    printf ("\n Enter the DOB:-");
    scanf (" %[^\n]", stud1.DOB);

    printf ("\n ***** STUDENT DETAILS *****");

    printf ("\n ROLL No. = %d", stud1.roll_no);

    printf ("\n FEES = %f", stud1.fees);

    printf ("\n DOB = %s", stud1.DOB);

    printf ("\n NAME = %s", stud1.name);

    return 0;
}
