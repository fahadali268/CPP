#include<iostream>
using namespace std;

void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}

void insertionsort(int *arr, int n){
    for(int i=1;i<n;i++){
        int curr = i;
        while(arr[curr] < arr[curr-1] && curr > 0){
            swap(arr[curr],arr[curr-1]);
            curr--;
        }
    }
    printArr(arr,n);
}

int main(){
    int arr[] = {9,1,3,5,4};
    int n = sizeof(arr)/sizeof(int);

    insertionsort(arr, n);
}