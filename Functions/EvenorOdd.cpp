#include<iostream>
using namespace std;
void evenodd(int a){
    if(a%2==0){
        cout<<"Even";
    }
    else{
        cout<<"odd";
    }
}

int main(){
    evenodd(3);
   return 0;
}