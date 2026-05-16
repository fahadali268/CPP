#include<iostream>
#include<cmath>
using namespace std;

int main() {
    // int n;
    // long factorial = 1.0;

    // cout << "Enter a positive integer: ";
    // cin >> n;

    // if (n < 0)
    //     cout << "Error! Factorial of a negative number doesn't exist.";
    // else {
    //     for(int i = 1; i <= n; ++i) {
    //         factorial *= i;
    //     }
    //     cout << "Factorial of " << n << " = " << factorial;    
    // }
    // int n,mul=0;
    // cout<<"Enter the number : ";
    // cin>>n;
    // if(n<0){
    //     cout<<" Error : Entered number is a negative number"<<endl;
    // }
    // else if(n==0){
    //     cout<<"0"<<endl;
    // }
    // else{
    //     for(int i = 1;i<=10;i++ ){
    //         mul = n*i;
    //         cout<<n<<" * "<<i<<" is : "<<mul<<endl;
    //     }
    // }
    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // int original = n;
    // int arm = 0;
    // int num = n;
    // while(num > 0){
    //     int lastvar = num % 10;
    //     arm += lastvar * lastvar * lastvar;
    //     num /= 10;
    // }
    // if(original == arm){
    //     cout<<"Armstrong number"<<endl;
    // } else{
    //     cout<<"Not an Armstrong number"<<endl;
    // }
    // int n;
    // bool isPrime = true;
    // cout<<"Enter the number: ";
    // cin>>n;
    // for(int i=2;i<=n-1;i++){
    //     if(n%i==0){
    //         isPrime=false;
    //         break;
    //     }
    // }
    // if(isPrime==true){
    //     cout<<n<<" is a prime number";
    // }else{
    //     cout<<n<<" is not a prime number";
    // }
    // return 0;

    int n = 10;
    int first = 0, sec = 1;

    cout << first << " " << sec << " ";

    for (int i = 2; i < n; i++) {
        int third = first + sec;
        cout << third << " ";
        first = sec;
        sec = third;
    }

    cout << "\n";

    return 0;
}