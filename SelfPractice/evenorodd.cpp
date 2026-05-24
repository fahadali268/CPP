#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int final = n%2==0 ? true : false;
    cout<<final<<endl;
   return 0;
}