#include<iostream>
using namespace std;
int main(){
    int n = 5;
    //palindrome patten problem
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        for(int j=2;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    // TrianglePattern
    bool val = true;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<val;
            val = !val;
        }
        cout<<endl;
    }

    // Rhombus patten 
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}