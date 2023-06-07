#include<iostream>
using namespace std;

int sroot (int m);
double sroot (double n);
long sroot (long o);

int main()
{
    int a;
    double b;
    long c;
    cin>>a>>b>>c;
    cout<<sroot(a)<<endl;
    cout<<sroot(b)<<endl;
    cout<<sroot(c)<<endl;
    return 0;
}
int sroot (int m)
{
    return pow(m,0.5);
}
double sroot (double n)
{
    return pow(n,0.5);
}
long sroot (long o)
{
    return pow(o,0.5);
}
