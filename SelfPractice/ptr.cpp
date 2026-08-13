#include<iostream>
using namespace std;
int main(){
    int x;
    int *ptr;
    x = 7;
    ptr = &x;
    cout<<*ptr<<endl;
    return 0;
}