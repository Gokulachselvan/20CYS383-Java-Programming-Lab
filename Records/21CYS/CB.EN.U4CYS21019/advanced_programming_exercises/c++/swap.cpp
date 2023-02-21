//default --shallow copy (does not create new memory area)
//user defined copy con----does deep copy (create new memory area)
//m=x;--user def
//m(x);---default




#include <iostream>
using namespace std;

void swap(int &a,int &b)
{   
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int c,d;
    c=3;
    d=4;
    swap(c,d);
    cout<<c<<d;

    return 0;
}


