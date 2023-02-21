#include <stdio.h>

struct student
{
    int roll;
    float mark;
};

void swap(struct student *a,struct student *b)
{
    int temp_roll; 
    float temp_mark;
    
    temp_roll=a->roll;
    a->roll=b->roll;
    b->roll=temp_roll;
    
    temp_mark=a->mark;
    a->mark=b->mark;
    b->mark=temp_mark;
}

int main()
{
    struct student a,b;
    a.roll=10;
    b.roll=11;
    a.mark=99.9;
    b.mark=98.9;
    swap(&a,&b);
    printf("%d   %f\n",a.roll,a.mark);
    printf("%d   %f\n",b.roll,b.mark);
    return 0;
}
