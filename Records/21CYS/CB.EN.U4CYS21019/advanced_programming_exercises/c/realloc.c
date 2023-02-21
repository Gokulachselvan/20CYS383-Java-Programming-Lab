#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    int i,n,m;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    
    printf("\nThe address of old allocated is\n");
    for(i=0;i<n;i++){
        printf("%p\n",(p+i));
    }
    m=5;
    p=realloc(p,m*sizeof(int));
     printf("\nThe address of new allocated is\n");
    for(i=0;i<m;i++){
        printf("%p\n",(p+i));
    }
    free(p);
    return 0;
}

