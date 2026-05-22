#include<iostream>
using namespace std;

//pass by value
void changeA(int a){
    a = 20;
    cout<<a<<endl;
}

//pass by refrence using pointers
void changeA2(int *ptr){
    *ptr = 20;
    cout<<*ptr<<endl;
}

//pass by refrence using refrence variable
void changeA3(int &b){
    b = 20;
    cout<<b<<endl;
}

int main(){
    int a = 10;
    // changeA(a);
    // changeA2(&a);
    changeA3(a);
    cout<<a<<endl;
    return 0;
}