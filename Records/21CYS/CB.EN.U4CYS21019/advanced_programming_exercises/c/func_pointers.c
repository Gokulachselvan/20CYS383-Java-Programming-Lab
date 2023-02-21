/*#include <stdio.h>
int add(int,int);
int main()
{
    int c=2,d=3,g;
    /*g=add(c,d);
    printf("%d",g);
    return 0;/
    int (*fun)(int,int)=add;
    g=(*fun)(c,d);    //calling add function using pointers
    printf("%d",g);
    printf("\n%p",add);
}

int add(int a, int b)
{
    return(a+b);
}*/


#include<stdio.h>

float add(int,int);
float sub(int,int);
float mul(int,int);
float divi(int,int);

int main()
{
    int c=2,d=3,opt;
    float g;
    float(*fun[4])(int,int)={add,mul,sub,divi};
    printf("\nEnter option:");
    scanf("%d",&opt);
    g=(*fun[opt])(c,d);
    printf("\n%.2f",g);
}

float add(int a, int b)
{
    return(a+b);
}
float mul(int a,int b){
return(a*b);
}
float sub(int a,int b){
    return(a-b);
}
float divi(int a,int b){
    return(a/b);
}
