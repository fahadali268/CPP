#include<iostream>
#include<cstring>

void ToLowerCase(char str[],int n){

    for(int i=0;i<n;i++){
        int ch = str[i];
        if(ch>='a' && ch<='z'){
            continue;
        }else{
            str[i] = ch - 'A' + 'a';
        }
    }
}

int main(){
    char word[] = "aPPlE";

    ToLowerCase(word,strlen(word));

    std::cout<<word;
    return 0;
}