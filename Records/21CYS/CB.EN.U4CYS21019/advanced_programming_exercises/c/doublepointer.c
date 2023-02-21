#include <stdio.h>

int main()
{
    int sum=8;
    int *ptr;
    ptr=&sum;
    int **dtr;
    dtr=&ptr;
    printf("the value of variable is: %d",sum);
    printf("\nthe address of variable is : %p",ptr);
    printf("\n\n\n\n\n\n");
    printf("\nthe address of variable is : %p",dtr);
    return 0;
}



//struct student *atr;
//atr=&d; object name of struct
//atr->roll;
//atr->mark;
