#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    printArr(arr,n);
}

// ! Optimized solution if array is sorted 

void bubblesort2(int *arr, int n){
    for(int i=0;i<n-1;i++){
        bool isSort = false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSort = true;
            }
        }
        if(!isSort){
            return;
        }
    }
    printArr(arr, n);
}

int main(){
    int arr[] = {5,7,3,2,1};
    int n = sizeof(arr)/sizeof(int);

    bubblesort2(arr,n);
    return 0;
}




