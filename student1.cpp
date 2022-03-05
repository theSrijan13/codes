#include<iostream>
#include<string>
using namespace std;
class Student1{
public:
    string name;
    int roll_no;
    void set1(){
        cout<<"enter name of student 1"<<endl;
        cin>>name;
        cout<<"enter roll no of student 1"<<endl;
        cin>>roll_no;
    }
    void set2()
    {
        cout<<"enter name of student 2:"<<endl;
        cin>>name;
        cout<<"enter roll no of student2:"<<endl;
        cin>>roll_no;
    }
    void display1()
    {
        cout<<name<<endl;
        cout<<roll_no<<endl;
    }
    void display2()
    {
        cout<<name<<endl;
        cout<<roll_no<<endl;
    }
};
int main()
{
    Student1 s1;
    Student1 s2;
    s1.set1();
    s1.display1();
    s2.set2();
    s2.display2();
    return 0;
}
