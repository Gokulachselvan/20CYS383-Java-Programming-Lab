//AREA OF 10 TRIANGLE accessing private function using public MEMBER FUNCTION outside class using :: reading values from outside for updating the attributes
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
    void read(int a1,int a2) 
    {
     l=a1;
     b=a2;
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
    int i,a,b;
    for(i=0;i<2;i++)
    {
        cin>>a;
        cin>>b;
        t[i].read(a,b);
        t[i].display();
    }
    return 0;
}

