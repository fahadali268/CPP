// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for(int i = 1;i<=n;i++){
//         for(int j = 1;j<=n-i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//    return 0;
// }

// Normal starts
#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
   return 0;
}