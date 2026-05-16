#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        for(int j = 1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = n;i>=1;i--){
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        for(int j = 1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}