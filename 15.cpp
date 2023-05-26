//Object pointer Example

#include<iostream>
using namespace std;

class myclass
{
    int a;
public:
    myclass(int x);
    int get_a();
};
myclass::myclass(int x)
{
    a = x;
}
int myclass::get_a()
{
   return a;
}

int main()
{
    myclass ob(100);
    myclass *p;
     p = &ob ;
    cout<<"Value using object: "<<ob.get_a()<<endl;
    cout<<"Value using pointer: "<<p->get_a()<<endl;
    return 0;
}
