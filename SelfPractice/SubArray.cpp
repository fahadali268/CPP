#include<iostream>

void printSubArr(int *arr, int n){
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                std::cout<<arr[i];
            }
            std::cout<<", ";
        }
        std::cout<<"\n";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    printSubArr(arr,n);
    return 0;
}