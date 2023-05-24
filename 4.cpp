//Program For Armstrong Number ( LAB-1 )
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, temp, rem, sum = 0, n = 0 ;
    cout<<"Enter an integer: " ;
    cin>>num;

     temp = num;

    while (temp != 0)
    {
        temp =temp/10;
        ++n;
    }

    temp = num;
    while (temp != 0)
    {
        rem = temp%10;
        sum = sum + pow(rem, n);
        temp = temp/10;
    }
    if(sum == num)
        cout<<"Armstrong number."<<endl;
    else
        cout<<"Not Armstrong number."<<endl;
    return 0;
}
