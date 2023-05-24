// Program for largest number among 4 int number (LAB-1 )

#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d, Max;

    cout<<"Enter four number: " ;
    cin>>a>>b>>c>>d;

    if(a>>b && a>>c && a>>d)
        Max = a;
    else if(b>>c && b>>d && b>>a)
        Max = b;
    else if(c>>d && c>>a && c>>b)
        Max = c;
    else
        Max = d;

    cout<<"Maximum Number is: "<<Max<<endl;
    return 0;

}
