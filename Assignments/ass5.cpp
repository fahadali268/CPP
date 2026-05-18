#include<iostream>
using namespace std;

//sum of digits
int digSum(int n){
    int res=0;
    while(n>0){
        res+=n%10;
        n=n/10;
    }
    return res;
}

//parameters (a+b)^2
int square(int a,int b){
    int final = a*a+b*b+2*a*b;
    return final;
}

//Lagest of 3 
int largest(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}

// Next Character
char nextChar(char ch){
    if(ch == 'a'){
        return 'z';
    }
    else{
    ch += 1;
    }
    return ch;
}

//Palindrome
int reverse(int n){
    int res = 0;
    while(n>0){
        int lastdigit = n%10;
        res = res*10 + lastdigit;
        n = n/10;
    }
    return res;
}

bool isPalindrome(int n){
    int revnum = reverse(n);
    return n == revnum;
}

int main(){
    if(isPalindrome(122)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}