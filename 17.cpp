// Automatic In-line Function

#include<iostream>
using namespace std;

class samp
{
    int i, j;
public:
    samp(int a, int b)
    {
        i =a ;
        j = b;
    }
    int divisible()
    {
        return (i%j==0);
    }
};

int main()
{
    samp ob1(10,2), ob2(10,3);

    if(ob1.divisible())
        cout<<"10 is divisible by 2"<<endl;
    if(ob2.divisible())
        cout<<"10 is not divisible by 3"<<endl;
    return 0;
}

