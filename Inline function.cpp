#include<iostream>
using namespace std;

class samp{
int i, j;
public:
    samp(int a, int b);
    int divisible();
};
samp::samp(int a, int b)
{
    i=a;
    j=b;
}
inline int samp::divisible()
{
    return !(i%j);
}
int main()
{
    int a, b;
    cin>>a >>b;
    samp ob1(a,b), ob2(a,b);
    if (ob1.divisible())
        cout<<"10 divisible by 2"<<endl;
    if (ob2.divisible())
        cout<<"10 divisible by 3";
    return 0;
}
