// ! Array Example with output

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     int n = sizeof(arr)/sizeof(int);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// ? Array example with input

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n value: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}