// c++ program for armstrong number
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int original=n;
    int sum=0;
    while(n>0)
    {
        int lastDigit=n%10;
        sum=sum + pow(lastDigit,3);
        n=n/10;
    }
    if(sum==original)
    {
        cout<<"Its an armstrong number"<<endl;
    }
    else
    {
        cout<<"Its not an armtrong num"<<endl;
    }
    return 0;
}
