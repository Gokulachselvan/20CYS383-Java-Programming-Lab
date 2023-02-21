#include <stdio.h>
void mul2(int *c)
{
    int i;
    for(i=0;i<2;i++)
    {
        c[i]=2*c[i];
    }
}
 
void mul3(int (*d)[2])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            d[i][j]=3*d[i][j];
        }
    }
}


int main()
{
    int i,j;
    int a[2]={1,2};
    int c[3][2]={{3,4},{5,6},{7,8}};
    for(i=0;i<2;i++)
    {
    printf("%d\t",a[i]);
    }
    printf("\n\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d  ",c[i][j]);
            
        }printf("\n");
    }
    printf("\n\n\n\n");
    mul2(a);
    mul3(c);
    for(i=0;i<2;i++)
    {
    printf("%d\t",a[i]);
    }
    printf("\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d  ",c[i][j]);
        }printf("\n");
    }

    return 0;
}



/*/*c=c[2]------------> 1d
(*d)[2]=d[3][2]----> 2d*/

