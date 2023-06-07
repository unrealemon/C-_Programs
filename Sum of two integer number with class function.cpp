#include<iostream>
using namespace std;

class firstclass{
int a;
public:
    void set_a(int num1, int num2);
    int get_a();
};
void firstclass::set_a(int num1, int num2)
{
    a= num1+num2;
}
int firstclass::get_a()
{
    return a;
}
int main()
{
    firstclass obj;
    cin >>num1 >>num2;
    sum=num1+num2;
    cout<<obj.get_a();
    return 0;
}
