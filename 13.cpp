//Exercise - Find volume of a Box page - 58 ( 3 )

#include<iostream>
using namespace std;

class Box{
     double a, b, c;
 public:
    Box(double x, double y, double z);
    double compute();
    void Vol();
};

Box::Box(double x, double y, double z)
{
    a = x;
    b = y;
    c = z;
}

void Box::Vol()
{
    cout<<"Volume: "<<a*b*c<<endl;
}

int main()
{
    Box ob(2,3,5);
    ob.Vol();
    return 0;
}
