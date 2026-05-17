#include<iostream>
using namespace std;
int fact(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int bioCoff(int n,int r){
    int val1 = fact(n);
    int val2 = fact(r);
    int val3 = fact(n-r);
    int final = val1/(val2 * val3);
    return final;
}

int main(){
    cout<<bioCoff(4,2)<<endl;
    return 0;
}