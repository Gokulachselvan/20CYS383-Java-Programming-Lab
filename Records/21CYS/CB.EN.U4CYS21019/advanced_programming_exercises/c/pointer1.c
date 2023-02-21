#include <stdio.h>

int main()
{
    char sum='c';
    char *ptr;
    ptr=&sum;
    printf("the value of variable is: %c",sum);
    printf("\nthe address of variable is : %p",ptr);
    ptr++;
    printf("\nthe value of variable is: %c",sum);
    printf("\nthe address of variable is : %p",ptr);
    printf("\n\n");
    printf("the value of variable is: %c",sum);
    printf("\nthe address of variable is : %p",++ptr);
    return 0;
}

