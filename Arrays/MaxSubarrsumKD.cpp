#include<iostream>
#include<climits>
using namespace std;

void MaxsubarraysumKD(int *arr,int n){
    int MaxSum = INT_MIN;
    int CurrSum = 0;
    for(int i = 0;i<n;i++){
        CurrSum += arr[i];
        MaxSum = max(MaxSum,CurrSum);
        if(CurrSum < 0){
            CurrSum = 0;
        }
    }
    cout<<"The MaxSum of Subarray: "<<MaxSum;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    MaxsubarraysumKD(arr,n);
   return 0;
}