time complexity O(nlogn);

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> vec;
        vec.push_back(nums[nums.size()-1]);
        int k=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]!=vec[k]){
                vec.push_back(nums[i]);
                k++;
            }
        }
        if(vec.size()<3){
            return vec[0];
        }
        return vec[2];
        
    }
};


int main(){
    Solution obj;
    vector<int> vec={3,2,6,4,7};
    cout<<obj.thirdMax(vec);
    return 0;
}
