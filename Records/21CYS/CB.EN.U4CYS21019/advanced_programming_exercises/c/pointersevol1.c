#include <stdio.h>
 
 
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

        
int main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    
    printf("\nThe values before swapping is a=%d b=%d\n",a,b);
    
    if(a>b)
    {
        c=1;
        swap(&a,&b);
    }
    else
    {
        c=2;
        swap(&b,&a);
    }
    switch(c)
    {
        case 1:
        printf("\nThe values after swapping is a=%d  b=%d",a,b);
        break;
        
        case 2:
        printf("\nThe values after swapping is a=%d  b=%d",a,b);
        break;

        default:
        printf("invalid");
    }
    return 0;
}


