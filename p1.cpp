#include<iostream>
using namespace std;
// int main(){
//     int n = 10829;
//     int sum = 0;
//     while(n>0){
//         int num = n % 10;
//         n = n / 10;
//         sum += num;
//     }
//     cout<<sum;
//     return 0;
// }
// int main(){
    // int n = 10829;
    // int sum = 0;
    // while(n>0){
    //     int num = n % 10;
    //     if(n%2!=0){
    //         sum += num;  //if we want only odd digits sum!
    //     }
    //     n = n / 10;
    // }
    // cout<<sum;
    // return 0;
    int main(){
    int n;
    bool isPrime = true;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){
        cout<<n<<" is a prime number";
    }else{
        cout<<n<<" is not a prime number";
    }
    return 0;
}