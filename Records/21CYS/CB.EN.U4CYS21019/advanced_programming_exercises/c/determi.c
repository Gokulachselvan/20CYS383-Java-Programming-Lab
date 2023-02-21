#include <stdio.h>
void det(int m,int n,int matrix[m][n])
{
    int det,i,j;
    printf("\nThe Entered 3X3 Matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
       det = det + (matrix[0][i]*(matrix[1][(i+1)%3]*matrix[2][(i+2)%3] - matrix[1][(i+2)%3]*matrix[2][(i+1)%3])); 
    }
    printf("\nThe Determinant of the matrix is: %d\n\n",det);
}

void main ()
{
    int matrix[3][3],m=3,n=3,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the value for 3X3 matrix[%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
}

    det(m,n,matrix);
}




