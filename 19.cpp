// Friend Function Example

#include<iostream>
using namespace std;

class myclass{
       int n, d;
   public:
    myclass(int i, int j){n = i; d = j;}        // constructor
    friend int factor(myclass ob);              // object create
};

int factor(myclass ob)  // without class method
{
   return ob.n+ob.d ;
}

int main()
{
   myclass ob1(100,20), ob2(30,4);

      cout<<"Sum of first object: "<<factor(ob1)<<endl<<"Sum of second object: "<<factor(ob2)<<endl;
    return 0;
}
