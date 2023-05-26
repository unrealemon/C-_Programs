//      Page - 42 (4)

#include<iostream>
using namespace std;

class dice{
//    int a;
public:
    int a;
 void seta(int x);
 void show();
};
void dice::seta(int x)
{
    a = x;
}
void dice::show()
{
    cout<<a;
}

int main()
{
    dice ob;
    ob.a=10;
    ob.show();
    return 0;
}
