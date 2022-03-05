#include<iostream>
#include<stdlib.h>
using namespace std;
class tollbooth{
    unsigned int tc;
    double tm;
public:
    tollbooth()
    {
        tc=0;
        tm=0.0;
    }
    void paycar()
    {
        tc++;
        tm+=7.50;
    }
    void nopaycar()
    {
        tc++;
    }
    void display()
    {
        cout<<tc<<endl;
        cout<<tm<<endl;
    }
};
int main()
{
    char ans;
    tollbooth t1;
    do{
        cout<<"what happened (p/n/d) ?"<<endl;
        cin>>ans;
        switch(ans)
        {
            case 'p':
                t1.paycar();
                break;
            case 'n':
                t1.nopaycar();
                break;
            case 'd':
                t1.display();
                exit(0);

        }
    }
    while(1);
}
