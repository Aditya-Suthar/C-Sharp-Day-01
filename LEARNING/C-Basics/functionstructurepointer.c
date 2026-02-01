#include <stdio.h>

// creating a strucuture
struct student {
    int roll;
    int age;
    float marks;
};

void update (struct student *s)
{
    s-> marks += 4;
}

void display (struct student s)
{
    printf("Marks: %.1f\n", s.marks);
}

int main ()

{
    struct student s1 = {40,50,60};
    update(&s1);
    display(s1);
    return 0;
}