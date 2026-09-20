#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char *str,int n){
    int i=0,j=n-1;
    while(i<j){
        if(str[i++] != str[j--]){
            cout<<"Not a Valid Palindrome";
            return false;
        }
    }
    cout<<"Valid Palindrome";
    return true;
}

int main(){
    char str[10];
    cin.getline(str,10);
    isPalindrome(str,strlen(str));
    return 0;
}