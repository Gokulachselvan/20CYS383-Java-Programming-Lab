#include <stdio.h>

void swap(int *a,int *b)
{   
    printf("%d   %d\n",*a,*b);
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int c,d;
    c=3;
    d=4;
    swap(&c,&d);
    printf("%d  %d",c,d);

    return 0;
}


