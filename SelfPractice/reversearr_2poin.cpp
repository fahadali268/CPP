#include<iostream>
using namespace std;

void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr [] = {1,4,2,6,5};
    int n = sizeof(arr)/sizeof(int);

    int start = 0,end = n-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
        // ! swap temp method
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
    }

    printArr(arr,n);
    return 0;
}