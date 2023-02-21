//AREA OF 10 TRIANGLE USING MEMBER FUNCTION
#include <iostream>

using namespace std;

class triangle
{
    private:
    int l;
    int b;
    public:
    void read()
    {
        cin>>l;
        cin>>b;
    }
    void area()
    {
        cout<<0.5*l*b<<endl;
    }
};


int main()
{
    triangle t[10];
    int i;
    for(i=0;i<10;i++)
    {
        t[i].read();
        t[i].area();
    }
    return 0;
}
