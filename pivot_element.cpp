#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int lef_sum=0;
            int rig_sum=0;
            for(int j=0;j<i;j++){
                lef_sum=lef_sum+nums[j];
            }
            for(int k=i+1;k<nums.size();k++){
                rig_sum=rig_sum+nums[k];
            }
            if(lef_sum==rig_sum){
                return i;
            }
        }
        return -1;
    }
int main(){
   vector<int> nums={1,2,1,3,0};
   int ans=pivotIndex(nums);
   cout<<"Index is = "<<ans;
}