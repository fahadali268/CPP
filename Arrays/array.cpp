#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of arr: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}