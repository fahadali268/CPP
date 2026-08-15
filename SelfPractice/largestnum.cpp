#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,4,3,9,0};
    int n = sizeof(arr)/sizeof(int);
    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }else if(arr[i] < min){
            min = arr[i];
        }
    }
     cout<<"Largest = "<<max<<"\n";
     cout<<"Smallest = "<<min<<"\n";
    return 0;
}
