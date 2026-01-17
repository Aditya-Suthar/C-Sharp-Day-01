#include <stdio.h>


struct DOB
{
    int day;
    int month;
    int year;
};

struct student
{
    int roll_no;
    char name[100];
    float fees;
    struct DOB date;
}s1;

int main ()
{
    printf ("\n Enter the roll number:-");
    scanf ("%d",&s1.roll_no);

    printf ("\n Enter the name:-");
    scanf (" %[^\n]", s1.name);

    printf ("\n Enter the DOB:-");
    scanf ("%d %d %d", &s1.date.day,&s1.date.month,&s1.date.year);

    printf ("\n Enter the fees:-");
    scanf ("%f",&s1.fees);

    printf ("\n ********STUDENT DETAILS********");
    printf ("\n ROLL NO:- %d",s1.roll_no);
    printf ("\n NAME:- %s", s1.name);
    printf ("\n FEES:- %f", s1.fees);
    printf ("\n DOB:- %d-%d-%d",s1.date.day,s1.date.month,s1.date.year);

    return 0;
}
