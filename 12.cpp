// Example of Constructor with parameter/s

#include<iostream>
using namespace std;

class constructor{
        int a, b;
    public:
        constructor(int m, int n);
        void show();
};

constructor::constructor(int m, int n)
{
    cout<<"Constructing . . ."<<endl;
    a = m;
    b = n;
}

void constructor::show()
{
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
}

int main()
{
    constructor ob(10,20);
    ob.show();
    return 0;
}

