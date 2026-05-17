#include<iostream>
using namespace std;
int product(int a, int b){
    int mul = a*b;
    return mul;
}
int main(){
    int final_mul = product(2,4);
    cout<<"Product: "<<final_mul<<endl;
    return 0;
}