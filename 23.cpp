#include<iostream>
using namespace std;

class myclass{
int a;
public:
    myclass(int x);
    void show();
};
myclass::myclass(int x)
{
    cout<< "Constructor "<<endl;
    a=x;
}
void myclass::show()
{
    cout<<a <<endl;
}
int main()
{
    myclass obj(5);
    obj.show();
    return 0;
}
