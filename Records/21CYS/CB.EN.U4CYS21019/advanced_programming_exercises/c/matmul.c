#include<stdio.h>    
void main()
{  
    int a[10][10],b[10][10],mul[10][10],r,i,j,k;    
    printf("Enter the number of rows&col: ");    
    scanf("%d",&r);    
    printf("\nEnter the first matrix elements:\n");    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<r;j++)    
        {    
            scanf("%d",&a[i][j]);    
        }           
    }    
    printf("\nEnter the second matrix elements:\n");    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<r;j++)    
        {    
        scanf("%d",&b[i][j]);    
        }    
    }    
    printf("\nMultiplication result of 2 matrices is:\n");    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<r;j++)    
        {    
            mul[i][j]=0;    
            for(k=0;k<r;k++)    
            {    
                mul[i][j]+=a[i][k]*b[k][j];    
            }    
        }    
    }    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<r;j++)    
        {    
            printf("%d ",mul[i][j]);    
        }    
        printf("\n");    
    }    
}

