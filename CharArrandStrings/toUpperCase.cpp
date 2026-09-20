#include<iostream>
#include<cstring>
using namespace std;

void toUpperCase(char word[],int n){
    for(int i=0;i<n;i++){
        int ch = word[i];
        if(ch >= 'A' && ch<='Z'){
            continue;
        }else{
            word[i] = ch - 'a' + 'A';
        }
    }
}

int main(){
    char word[] = "ApPle";

    toUpperCase(word,strlen(word));

    cout<<word<<endl;
    return 0;
}