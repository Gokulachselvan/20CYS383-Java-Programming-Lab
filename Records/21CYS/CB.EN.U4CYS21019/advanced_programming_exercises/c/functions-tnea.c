#include <stdio.h>
int fibo(int n)
{
    if(n<=1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int y,n=9;
    y=fibo(n);
    printf("%d",y);
    return 0;
}

