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
    cout<<"The decimal number of ("<<n<<") : "<<dec<<endl;
}

void dectobin(int n){
    int num2 = n;
    int bin = 0;
    int pow = 1;

    while(num2>0){
        int rem = num2%2;
        bin += rem*pow;
        pow *= 10;;
        num2 /= 2;
    }
    cout<<"The Binary no of("<<n<<"): "<<bin<<endl;
}

int main(){
    bintodec(111111);
    bintodec(10110);
    bintodec(10011);
    bintodec(110010);
    cout<<"\n";
    dectobin(25);
    dectobin(49);
    dectobin(31);
    dectobin(88);
    return 0;
}