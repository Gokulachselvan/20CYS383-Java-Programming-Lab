/*commmand line arguments

./a.out QT 3 8.6 to give ip to the program
a na 4 a.out 3 qtt 8.6 also incl
ar[0] na a.out ar[1] na qt etc

while running time we need to give ./a.out qt 3 8.6 in linux
*/

#include <stdio.h>
#include <stdlib.h>

int main(int a,char *arg[])
{
    //atoi(ar[2]); print 3 as int not as char
    //atif(ar[3]); print as float
    printf("\n%d",a);
    printf("\n%s",arg[0]);
    printf("\n%s",arg[1]);
    printf("\n%d",atoi(arg[2]));
    printf("\n%f",atof(arg[3]));

    return 0;
}

