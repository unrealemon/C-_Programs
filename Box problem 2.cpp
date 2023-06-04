#include<iostream>
using namespace std;

class box
{
public:
    box();
    double vol();
};
box::box()
{
    cout<<endl;
}
double box::vol()
{
    double a,b,c;
    cout<<"Enter three number : ";
    cin>>a>>b>>c;
    cout<<"Volume is = "<<a*b*c;
}
int main()
{
    box ob;
    ob.vol();
    return 0;
}
