#include <iostream>
using namespace std;

class array_details
{
    public:
    int a[5],i,j,temp;
    void readarray()
    {
        for(i=0;i<5;i++)
        {
            cin>>a[i];
        }
    }
};

class functions : public array_details
{
    public:
    void sort()
    {
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
              {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
              }
        }
              
    }
        for(i=0;i<5;i++)
        {
           cout<<"\n"<<a[i]; 
        }
    }
    
    void add()
    {
        int sum=0;
        for(i=0;i<5;i++)
        {
            sum=sum+a[i];
        }
        cout<<"\nThe sum of all elements in array is:"<<sum;
    }
    
    void smallest()
    {
         int min=a[0]; 
         for (i = 0; i < 5; i++) {     
            
       if(a[i] < min)    
           min = a[i]; } 
           
           cout<<"\nMinimum is :"<<min;
    }
};

int main()
{
    functions z;
    z.readarray();
    z.sort();
    z.add();
    z.smallest();

    return 0;
}

