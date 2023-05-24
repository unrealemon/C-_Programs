// Program for summation using class
#include<iostream>
using namespace std;

    class add{
       int a, b;
   public:
    void set_ab(int x, int y);
    int get();
};

void add::set_ab(int x, int y)
{
    a = x;
    b = y;
}

int add::get()
{
    int sum ;
    sum = a+b;
    return sum ;
}

int main()
{
    add ob;
    ob.set_ab(50,20);
    cout<<"Summation is: "<<ob.get()<<endl;
    return 0;
}
