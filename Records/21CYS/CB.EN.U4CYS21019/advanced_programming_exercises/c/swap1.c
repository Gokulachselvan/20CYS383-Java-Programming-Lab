#include <stdio.h>

void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main()
{
    int a=5,b=10,c=15,d=20;
    printf("a=%d  b=%d  c=%d\n",a,b,c);
    swap(&a,&b);
    swap(&b,&c);
    printf("\na=%d  b=%d  c=%d\n",a,b,c);
    return 0;
}

/*swap without third variable

#include <stdio.h>

void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main()
{
    int a=5,b=10;
    printf("a=%d  b=%d\n",a,b);
    swap(&a,&b);
    printf("\na=%d  b=%d\n",a,b);
    return 0;
}*/
