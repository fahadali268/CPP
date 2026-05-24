#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a and b values: ";
    cin>>a, cin>>b;
    cout<<"Before swapping the values are : "<<a<<","<<b<<endl;
    swap(a,b);
    cout<<"After swapping the values are: "<<a<<","<<b<<endl;
    return 0;
}