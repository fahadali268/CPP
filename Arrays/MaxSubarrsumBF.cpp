#include<iostream>
#include<climits>
using namespace std;

void MaxSubarrSum(int *arr,int n){
    int Maxsum = INT_MIN;
    for(int start = 0;start<n;start++){
        for(int end = start;end<n;end++){
            int Currsum = 0;
            for(int i = start;i<=end;i++){
                Currsum += arr[i];
            }
            cout<<Currsum<<" ";
            Maxsum = max(Currsum,Maxsum);
        }
        cout<<endl;
    }
    cout<<"Max Subarray sum is : "<<Maxsum;
}

int main(){
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    MaxSubarrSum(arr,n);
   return 0;
}