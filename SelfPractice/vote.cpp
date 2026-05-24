#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    string citizen;
    cout<<"\nEnter your citizen: ";
    cin>>citizen;
    if(age >=18 && citizen == "India"){
        cout<<"Can vote"<<endl;
    }else{
        cout<<"Can't Vote"<<endl;
    }
   return 0;
}