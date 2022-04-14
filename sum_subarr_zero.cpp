#include<iostream>
#include<vector>
using namespace std;
bool sum_subarr_null(vector<int> &vec){
    int sum=0;
    for(int i=0;i<vec.size();i++){
        sum=0;
        if(vec[i]!=0){
            for(int j=i;j<vec.size();j++){
                sum=sum+vec[j];
                if(sum==0){
                    return false;
                }
            }
        }
        if(vec[i]==0){
            return false;
        }
    }
        return true;
}
int main(){
    vector<int> vec={2,2,9,-3,8};
    int ans;
    ans=sum_subarr_null(vec);
    if(ans==0){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
    return 0;
}