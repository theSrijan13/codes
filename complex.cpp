#include<iostream>
using namespace std;
class Complex{
public:

    int real;
    int img;
    void setvalue()
    {
        cin>>real;
        cin>>img;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i";
    }
    void sum(Complex c1,Complex c2)
    {
        real=c1.real+c2.real;
        img=c1.img+c2.img;
    }
    void sub(Complex c1,Complex c2)
    {
        real=c1.real-c2.real;
        img=c1.img-c2.img;
    }

};
int main()
{
    Complex c1,c2,c3,c4;
    cout<<"enter the real and img part of 1st complex number"<<endl;
    c1.setvalue();
    cout<<"enter the real and img part of 2nd complex number"<<endl;
    c2.setvalue();
    cout<<"sum of complex number is :"<<endl;
    c3.sum(c1,c2);
    c3.display();
    cout<<"sub of complex number is :"<<endl;
    c4.sub(c1,c2);
    c4.display();
    return 0;

}
