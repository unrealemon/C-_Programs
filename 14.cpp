// Inheritance Simple Example

#include<iostream>
using namespace std;

class base{
     int a;
 public:
    void set_a(int n);
    int get_a();
};

class derived:public base{
      int b;
  public:
    void set_b(int m);
    int mult();
};

void base::set_a(int n)
{
    a = n;
}
int base::get_a()
{
    return a;
}

void derived::set_b(int m)
{
    b = m;
}
int derived::mult()
{
    return b*get_a();
}

int main()
{
    derived ob;
    ob.set_a(10);
    ob.set_b(10);
    cout<<"Multiplication is: "<<ob.mult()<<endl;
    return 0;
}
