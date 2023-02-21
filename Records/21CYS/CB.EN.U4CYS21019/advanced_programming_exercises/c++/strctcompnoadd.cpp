#include <iostream>
using namespace std;
class complex{
    public:
    int real;
    int img;
};
int main()
{
    complex a[2],sum;
    int i;
    for(i=0;i<2;i++){
    cout<<"Enter real part of 1st complex no:";
    cin>>a[i].real;
    cout<<"Enter complex part of 1st complex no:";
    cin>>a[i].img;
    }
    sum.real=a[0].real+a[1].real;
    sum.img=a[0].img+a[1].img;
    cout<<"sum of two complex numbers is:";
    cout<<sum.real<<"+"<<sum.img<<"i";
    return 0;
}
