#include<iostream>
#include<cstring>
using namespace std;

void RevCharArr(char word[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(word[i],word[j]);
        i++;
        j--;
    }
}

int main(){
    char word[] = {'h','e','l','l','\0'};
    RevCharArr(word,strlen(word));

    cout<<word<<endl;
    return 0;
}