#include<iostream>
using namespace std;

// ! BruteForce Approach
// int SearchSortArr(int arr[][4],int n,int key){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i][j] == key){
//                 return 1;
//             }
//         }
//     }
//     return -1;
// }

// ! Staircase Solution

bool SearchSortArr2(int arr[][4],int n,int m,int key){
    int i = n-1,j=0;
    while(i>=0 && j<m){
        if(arr[i][j] == key){
            cout<<"Key Found at ("<<i<<","<<j<<") \n";
            return true;
        }else if(arr[i][j] < key){
            j++;
        }else{
            i--;
        }
    }
    cout<<"Key not found!"<<endl;
    return false;
}

int main(){
    int arr[4][4] = { {10,20,30,40},
                     {15,25,35,45},
                     {27,29,37,47},
                     {32,33,38,50} };

    cout<<SearchSortArr2(arr, 4, 4, 40);
    return 0;
}