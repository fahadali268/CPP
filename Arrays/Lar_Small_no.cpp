#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2,4,8,9,0};
    int n = sizeof(arr)/sizeof(int);
    int max = arr[0];
    int min = arr[0];

    for(int i = 0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int i = 0;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout<<"Largest value in array: "<<max<<endl;
    cout<<"Smallest value in array: "<<min<<endl;
    return 0;
}