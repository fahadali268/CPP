#include<iostream>
using namespace std;
int main(){
    int arr[2][3]={{1,2,3},
                   {1,2,3}};
    int n=4,m=5;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<" "<<arr[i][j];
        }
    }
    return 0;
}