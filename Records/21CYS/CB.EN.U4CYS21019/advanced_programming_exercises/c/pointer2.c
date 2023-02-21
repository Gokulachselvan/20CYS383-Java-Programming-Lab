#include <stdio.h>

int main()
{
    int sum=8;
    int mul=10;
    int *ptr;
    ptr=&sum;
    printf("the value of variable is: %d",sum);
    printf("\nthe address of variable is : %p",ptr);
    printf("\nthe value of variable is: %d",mul);
    printf("\nthe address of variable is : %p",&mul);

    return 0;
}


