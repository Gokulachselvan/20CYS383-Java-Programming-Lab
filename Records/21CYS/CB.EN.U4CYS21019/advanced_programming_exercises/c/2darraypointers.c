#include <stdio.h>

int main()
{
    int a[2]={1,2};
    int b[2][3]={{4,5,6},{7,8,9}};
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("\n%p",*(b+i)+j);
        printf("\n%d  ",*(*(b+i)+j));}
    }
    return 0;
}


