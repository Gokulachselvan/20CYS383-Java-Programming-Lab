#include <iostream>
using namespace std;

class a{
    public:
    int p;
    //private:
    int q;
    //protected:
    int r;
};
class b : public a{
    };

int main()
{
    b z;
    z.p=5;
    z.q=10;
    z.r=15;
    cout<<z.p<<endl;
    cout<<z.q<<endl;
    cout<<z.r<<endl;
    
}
