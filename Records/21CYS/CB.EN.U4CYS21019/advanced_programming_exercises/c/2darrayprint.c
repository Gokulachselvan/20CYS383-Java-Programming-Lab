#include <stdio.h>
int main ()
{
  int a[2] = { 1, 2 };
  int b[2][3] = { {4, 5, 6}, {7, 8, 9} };
  int i, j;
  int (*q)[3];
  q = b;
  for (i = 0; i < 2; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  printf ("\n%p", (*(q + i) + j));
	  printf ("\n%d ", *(*(q + i) + j));

	}

    }
  return 0;
}				//int *p for storing address of int //int (*p)[3] for storing array of int address 

//int *p[2] for storing address int array of size 2

