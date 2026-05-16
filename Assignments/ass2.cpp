#include<iostream>
using namespace std;
int main(){
    // int a;
    // cout<<"Enter the number: ";
    // cin>>a;
    // if(a>0){
    //     cout<<a<<" is positive no."<<endl;
    // } else if(a<0){
    //     cout<<a<<" is a negative no."<<endl;
    // } else{
    //     cout<<a<<" is zero"<<endl;
    // }
    // int year;
    // cout<<"Enter the year"<<endl;
    // cin>>year;
    // if(year%4==0){
    //     cout<<year<<" is a leap year"<<endl;
    // } else{
    //     cout<<year<<" is a not a leap year"<<endl;
    // }
    // int a = 63,b=36;
    // bool x = a < b ? true : false;
    // int y = a > b ? a : b;
    // cout<<x<<","<<y<<endl;
    // int a = 5;
    // if(++a*5 <= 25){
    //     cout<<"Hello\n";
    // } else{
    //     cout<<"Bye";
    // }
    // return 0;
    int a;
    cout<<"Enter a 3 digit number: "<<endl;
    cin>>a;

    int b = a;
    
    int a1 = b%10;
    b /= 10;
    int a2 = b%10;
    b /=10;
    int a3 = b;

    int arm = a1*a1*a1+a2*a2*a2+a3*a3*a3;
    if(arm == a){
        cout<<a<<" is an armstrong number";
    }
    else{
        cout<<a<<" is not an armstrong number";
    }
    return 0;
}