#include<iostream>
#include<vector>
#include<string>
using namespace std;
 int numIdenticalPairs(vector<int>& nums) {
        vector<int> temp(1001,0);
        for(int i=0;i<nums.size();i++){
            temp[nums[i]]++;
        }
        int ans=0;
        for(int i=0;i<temp.size();i++){
            ans=ans+temp[i]*(temp[i]-1)/2;
        }
        return ans;
    }
int main(){
    vector<int> vec={1,2,3,4,2,3,3,1,5,6};
    cout<<"no. of required pairs are "<<numIdenticalPairs(vec);
}