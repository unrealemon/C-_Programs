// Friend function example page 109 ( 1 )

#include<iostream>
using namespace std;

class truck;
class car
{
    int passenger, speed;
public:
    car(int p, int s)
    {
        passenger = p;
        speed = s;
    }
    friend int sp_greater(car c, truck t);
};

class truck
{
    int weight, speed;
public:
    truck(int w, int s)
    {
        weight = w;
        speed = s;
    }
    friend int sp_greater(car c, truck t);
};
int sp_greater(car c, truck t)
{
    return c.speed - t.speed ;
}

int main()
{
    int i;
    car c1(6,30) ;
    truck t1(100,50) ;

    cout<<"Comparing c1 and t1: "<<endl ;
    i = sp_greater(c1,t1);
    if(i<0)
        cout<<"Truck is faster"<<endl;
    else if(i==0)
        cout<<"Car and truck speed is equal"<<endl;
    else
        cout<<"Car is faster"<<endl;
     return 0;

}
