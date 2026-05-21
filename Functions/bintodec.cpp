#include<iostream>
using namespace std;
void bintodec(int n){
    int num1 = n;
    int dec = 0;
    int pow = 1;
    while(num1>0){
        int lastdig = num1%10;
        dec += lastdig*pow;
        pow = pow*2;
        num1 = num1/10;
    }
    cout<<"Decimal no of ("<<n<<"): "<<dec<<endl;
}

void dectobin(int n){
    int num = n;
    int bin = 0;
    int pow = 1;

    while(num>0){
        int rem = num%2;
        bin += rem*pow;
        pow = pow*10;
        num = num/2;
    }
    cout<<"Binary no of ("<<n<<"): "<<bin<<endl;
}
int main(){
    bintodec(1011);
    dectobin(7);
    return 0;
}