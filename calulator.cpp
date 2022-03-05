#include<iostream>
using namespace std;
void add(int i,int j){
    int ans= i+j;
    cout<<ans<<endl;
}
void sub(int i,int j){
    int ans= i-j;
    cout<<ans<<endl;
}
void mul(int i , int j){
    int ans=i*j;
    cout<<ans<<endl;
}
void divison(int i,int j){
    int ans=i/j;
    cout<<ans<<endl;
}
int main()
{
    int i,j;
    int n;
    cout<<"enter two number :"<<endl;
    cin>>i>>j;
    cout<<"Enter your choice : ";
    cin>>n;
    switch(n){
        case 1:
            add(i,j);
            break;
        case 2:
            sub(i,j);
            break;
        case 3:
            mul(i,j);
            break;
        case 4:
            division(i,j);
            break;
    }
    return 0;
}
