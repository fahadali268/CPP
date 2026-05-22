#include<iostream>
using namespace std;
//without extra space (2 pointers approach)
void printArr(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(n);
    int start = 0, end = n-1;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        //or
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    printArr(arr,n);
    return 0;
}