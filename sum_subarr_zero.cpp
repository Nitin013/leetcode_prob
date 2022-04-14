#include<iostream>
#include<vector>
using namespace std;
bool sum_subarr_null(vector<int> &vec){
    int sum=0;
    for(int i=0;i<vec.size();i++){
        sum=0;
        for(int j=i;j<vec.size();j++){
            sum=sum+vec[j];
            if(sum==0){
                return false;
            }
        }
    }
        return true;
}
int main(){
    vector<int> vec;
    int ans,n;
    cout<<"enter the size of arr";
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cout<<"enter the element";
        cin>>temp;
        vec.push_back(temp);
    }
    ans=sum_subarr_null(vec);
    if(ans==0){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
    return 0;
}
