#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int original = n;
    int arm = 0;
    int num = n;
    while(num > 0){
        int lastvar = num % 10;
        arm += lastvar * lastvar * lastvar;
        num /= 10;
    }
    if(original == arm){
        cout<<"Armstrong number"<<endl;
    } else{
        cout<<"Not an Armstrong number"<<endl;
    }
   return 0;
}

