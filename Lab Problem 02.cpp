#include<iostream>
using namespace std;

class myclass{
int a, b, c;
public:
    myclass();
    void show();
};
myclass::myclass()
{
    cout<<' ';
}
void myclass :: show()
{
    int a, b, c;
    cout<<"Enter Three integer value : ";
    cin>>a>>b>>c;
    cout<<a<<endl<<b<<endl<<c;
}
int main()
{
    myclass obj;
    obj.show();
    return 0;
}
