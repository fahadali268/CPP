#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
        return false;
    }
    }
    return true;
}
void allPrime(int n){
    for(int i=2;i<=n;i++){
        if(isPrime(i)==true){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){
    allPrime(23);
    return 0;
}