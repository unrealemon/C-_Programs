// Class Related Example

#include<iostream>
using namespace std;

class myclass{
   int a, b ;
   public:
       void set_ab(int x, int y);
       void show();
};
void myclass::set_ab(int x, int y)
{
   a = x;
   b = y;
}

void myclass::show()
{
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;
}

int main()
{
    myclass ob;
    ob.set_ab(10,20);
    ob.show();
    return 0;
}
