//AREA OF 10 TRIANGLE accessing private function using public MEMBER FUNCTION outside class using ::
#include <iostream>

using namespace std;

class triangle
{
    private:
    int l;
    int b;
    float area() //private member function
    {
        return(0.5*l*b);
    }
    public:
    int j;
    void read() 
    {
        cin>>l;
        cin>>b;
    }
    void display(); //pub mem fn prototype *
};
 void triangle :: display()  //accessing member function outside of class using scope resultion operator
     {
        cout<<area()<<endl;
    }

int main()
{
    triangle t[2];
    int i;
    for(i=0;i<2;i++)
    {
        t[i].read();
        t[i].display();
        t[i].j=9;
        cout<<t[i].j<<endl;
    }
    return 0;
}

