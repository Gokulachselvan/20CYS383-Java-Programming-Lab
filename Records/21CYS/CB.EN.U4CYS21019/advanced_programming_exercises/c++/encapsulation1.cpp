//WE CAN ACCESS private attributes using mem functions:
//Access specifiers are used for data hiding
//ENCAPSULATION-- WRAPPING UP OF DATA ANF FUN AS SINGLE UNIT

#include <iostream>
using namespace std;

/*class student {
    private:
    int mark;
    public:
    void fun(int m) //member function
    {
        mark=m;
        cout<<mark;
    }
};

int main()
{
    student s,t;
    t.fun(100);
    cout<<"\n";
    s.fun(20);
    return 0;
}
*/

//THIS POINTER:
class student {
    private:
    int mark;
    public:
    void fun(int mark) //member function
    {
     { this->mark=mark;
        cout<<this->mark; }
    }
};

int main()
{
    student s,t;
    t.fun(100);
    cout<<"\n";
    s.fun(20);
    return 0;
}

