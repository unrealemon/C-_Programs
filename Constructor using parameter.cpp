#include<iostream>
using namespace std;

class myclass{
int a,b;
public:
    myclass(int x, int y);
    void show();
};
myclass::myclass(int x, int y)
{
    cout <<"Constructor "<<endl;
    a = x;
    b = y;
}
void myclass::show()
{
    cout<< a <<' ' <<b <<endl;
}
int main()
{
    int a,b;
    cout <<"Enter two number: ";
    cin >>a >>b;
    myclass obj(a,b);
    obj.show();
    return 0;
}
