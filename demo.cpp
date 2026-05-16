#include<iostream>
using namespace std;
int main(){
    int n = 10829;
    int sum = 0;
    while(n>0){
        int num = n % 10;
        if(n%2!=0){
        sum += num;
        }
        n = n / 10;
    }
    cout<<sum;
    return 0;
}