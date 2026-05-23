#include<iostream>
using namespace std;

void PrintSubArr(int *arr, int n){
    int start=0,end = n-1;
    for(start = 0;start<n;start++ ){
        for(end = start;end<n;end++){
            for(int i = start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<",";
        }
        cout<<endl;
    }
}

int main(){
    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    PrintSubArr(arr,n);
    return 0;
}