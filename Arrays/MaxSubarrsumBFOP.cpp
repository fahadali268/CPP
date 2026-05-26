#include<iostream>
#include<climits>
using namespace std;

void MaxsubarrsumOP(int *arr,int n){
    int Maxsum = INT_MIN;
    for(int start=0;start<n;start++){
        int Currsum = 0;
        for(int end = start;end<n;end++){
            Currsum += arr[end];
            Maxsum = max(Maxsum,Currsum);
        }
    }
    cout<<"Max subaaray sum: "<<Maxsum;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    MaxsubarrsumOP(arr,n);
    return 0;
}