// Example of Constructor and Destructor with out parameter

#include<iostream>
using namespace std;

class constructor{
        int a, b;
    public:
        constructor();
        ~constructor();
        void show();
};

constructor::constructor()
{
    cout<<"Constructing . . ."<<endl;
    a = 10;
    b = 20;
}

constructor::~constructor()
{
    cout<<"Destructing . . ."<<endl;
}

void constructor::show()
{
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
}

int main()
{
    constructor ob;
    ob.show();
    return 0;
}
