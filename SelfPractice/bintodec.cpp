#include<iostream>
using namespace std;


int bintodec(int num){
    int n = num;
    int res = 0;
    int pow = 1;

    while(n>0){
        int lastdig = n%10;
        res += lastdig * pow;
        pow = pow * 2;
        n = n/10;
    }
    cout<<"The decimal number of "<<num<<" is "<<res<<endl;
}

int dectobin(int num){
    int n = num;
    int res = 0;
    int pow = 1;

    while(n>0){
        int lastdig = n%2;
        res += lastdig*pow;
        pow = pow * 10;
        n = n/2;
    }
    cout<<"The binary number of "<<num<<" is "<<res<<endl;
}



int main(){
    bintodec(111);
    dectobin(10);
    return 0;
}