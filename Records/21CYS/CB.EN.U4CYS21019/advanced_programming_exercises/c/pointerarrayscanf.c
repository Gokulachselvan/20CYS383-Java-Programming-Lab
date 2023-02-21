/*#include <stdio.h>

int main()
{
    int a[10],i;
    int *p;
    p=a;
    for(i=0;i<3;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<3;i++)
    {
        printf("%d  ",*(p+i));
    }

//static allcation by pointers
    return 0;
}*/


#include <stdio.h>
#include <stdlib.h>		//malloc();calloc()--allocating memory;
			  //realloc()---reallocationg memory ;free()--used for erasing memory space memory stored in stack
int
main ()
{
  int *p;
  int n = 5;
  p = (int *) malloc (n * sizeof (int));	//allocating size of a as n 
  /*
     //for calloc
     p=(int *)calloc(n,sizeof(int));
     
     //for realloc
     p=realloc(p,m*sizeof(int));
   */
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", (p + i));
    }
  //free(p);    //used to free the space obtained by allocation
  for (int i = 0; i < n; i++)
    {
      printf ("%d  ", *(p + i));
    }

}
