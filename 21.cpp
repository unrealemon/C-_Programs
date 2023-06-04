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
     int sp_greater(truck t);
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
    friend int car::sp_greater(truck t);
};
int car::sp_greater(truck t)
{
    return speed - t.speed ;
}

int main()
{
    int i;
    car c1(6,30) ;
    truck t1(100,50) ;

    cout<<"Comparing c1 and t1: "<<endl ;
    i = c1.sp_greater(t1);
    if(i<0)
        cout<<"Truck is faster"<<endl;
    else if(i==0)
        cout<<"Car and truck speed is equal"<<endl;
    else
        cout<<"Car is faster"<<endl;

}

