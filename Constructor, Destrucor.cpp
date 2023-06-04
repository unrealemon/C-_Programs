#include<iostream>
using namespace std;

class myclass{
int a;
public:
    myclass();
    ~myclass();
    void show();
};
myclass::myclass()
{
    cout<< "Constructor "<<endl;
    a=10;
}
myclass::~myclass()
{
    cout<< "Destructor"<<endl;
}
void myclass::show()
{
    cout<<a <<endl;
}
int main()
{
    myclass obj;
    obj.show();
    return 0;
}
