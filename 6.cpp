//Function Overloading

#include<iostream>
using namespace std;

long calculate(long a, long b)
{
    return a+b;
}
int calculate(int a, int b)
{
    return a-b;
}
float calculate(float a, float b)
{
    return a*b;
}
double calculate(double a, double b)
{
    return a/b;
}

int main()
{
    long a=10, b=10;
    //cout<<"Enter two number: " ;
   // cin>>a>>b;
    cout<<"Addition: "<<calculate(a,b)<<endl;

    int a1, b1;
    cout<<"Enter two number: " ;
    cin>>a1>>b1;
    cout<<"Subtraction: "<<calculate(a1,b1)<<endl;

    float a2, b2;
    cout<<"Enter two number: " ;
    cin>>a2>>b2;
    cout<<"Multiplication: "<<calculate(a2,b2)<<endl;

    double a3, b3;
    cout<<"Enter two number: " ;
    cin>>a3>>b3;
    cout<<"Division: "<<calculate(a3,b3)<<endl;

    return 0;
}
