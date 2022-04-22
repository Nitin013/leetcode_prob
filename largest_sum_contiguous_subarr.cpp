#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxSubArray(vector<int>& nums) {
    std::vector<int> ans;
    for(int i=0;i<nums.size();i++){
        int sum=nums[i];
        ans.push_back(sum);
          for(int j=i+1;j<nums.size();j++){
              sum=sum+nums[j];
              ans.push_back(sum);
          }
    }
    sort(ans.begin(),ans.end());
    return ans[ans.size()-1];
}
int main(){
   vector<int> nums={1,2,3,4,-2,-5,-7,10};
   int ans=maxSubArray(nums);
   cout<<"Maxmimum sum is = "<<ans;
}