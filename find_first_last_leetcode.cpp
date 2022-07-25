#include<iostream>
#include<vecotr>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans[0]=i;
                break;
            }
        }
        for(int j=nums.size()-1;j>=0;j--){
            if(nums[j]==target){
                ans[1]=j;
                break;
            }
        }
        return ans;
    }
};
int main(){
    Solution obj;
    vector<int> nums;
    cout<<"click 1 to enter the elemet in the array";
    int i;
    cin>>i;
    while(i){
        cout<<"enter the element";
        int val;
        cin>>val;
        nums.push_back(val);
        cout<<"click 1 to enter the elemet in the array"<<"click 0 to stop entering the element";
        cin>>i;
    }
    cout<<"######## enter the target element#########";
    int target;
    cin>>target;
    vector<int> ans;
    ans=obj.searchRange(nums,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}