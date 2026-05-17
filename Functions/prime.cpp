#include<iostream>
using namespace std;
int main(){
    int count = 1;
    while(count<=15){
        cout<<(count%2==1 ? "****":"++++");
        ++count;
    }
    cout<<endl;
    return 0;
}