#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int> arr,int target){
    int i=0,j=arr.size()-1;
    int currsum = 0;
    vector<int> ans;
    while(i<j){
        int currsum = arr[i]+arr[j];
        if(currsum == target ){
            return {i,j}; 
            // ! or
            // * ans.push_back(i);
            // * ans.push_back(j);
            // * return ans;
        }else if(currsum > target){
            j--;
        }else{
            i++;
        }
    }
    return {};
}

int main(){
    vector<int> vec = {2,7,9,17};
    vector<int> ans = pairsum(vec,9);
    cout<<"["<<ans[0]<<","<<ans[1]<<"]"<<endl;
}