// Program for Perfect Number ( LAB-1 );

#include<iostream>
using namespace std;

int main()
{
    int num, i, sum = 0;
    cout<<"Enter the number: ";
    cin>>num;

    for( i=1; i<num; i++)
    {
        if(num%i==0)
        {
            sum = sum+i;
        }
    }
    if(sum==num)
        cout<<"Perfect Number"<<endl;
    else
        cout<<"Not Perfect Number"<<endl;
    return 0;
}
