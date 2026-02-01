// Integeration of functions and structures

#include <stdio.h>

struct student
{
    int roll;
    int age;
    float marks;
};

void display (struct student s)

{
    printf("Roll: %d\n", s.roll);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);
}

int main ()

{
    struct student s1 = {101,85,87.5};
    display(s1);
    return 0;
}