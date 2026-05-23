#include<iostream>
using namespace std;
int main(){
    int a = 20;
    int *ptr = &a;
    ptr++;
    cout<<ptr<<endl;
    return 0;
}