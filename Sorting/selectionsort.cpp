#include<iostream>
using namespace std;

void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
}

void selectionsort(int arr[], int n){
    for(int i = 0;i<n-1;i++){
        int minIdx = i;
        for(int j=i+1;j<n;j++){
            if(arr[minIdx] > arr[j]){
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
    printArr(arr, n);
}

int main(){
    int arr[5] = {9,1,4,3,2};
    int n = sizeof(arr)/sizeof(int);

    selectionsort(arr, n);
}