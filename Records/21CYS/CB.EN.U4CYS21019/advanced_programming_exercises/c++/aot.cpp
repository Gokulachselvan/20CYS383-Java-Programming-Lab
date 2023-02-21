/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int height,base,area,i;
    for(i=1;i<=10;i++)
    {
    cout<<"\nEnter base of triangle "<<i<<": ";
    cin>>base;
    cout<<"\nEnter height of triangle "<<i<<": ";
    cin>>height;
    area=0.5*base*height;
    cout<<"\nThe area of triangle "<<i <<"is: "<<area;
    }
    return 0;
}
