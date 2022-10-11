#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int count=0;
            int compare=nums[i];
            if(nums.size()>=(pow(10,5))){
                return false;
            }
            for(int j=i+1;j<nums.size();j++){
                compare=nums[i];
                if(compare<nums[j]){
                    compare=nums[j];
                    for(int k=j;k<nums.size();k++){
                          if(compare<nums[k]){
                              return true;
                          }
                    }
                }
                }
        }
        return false;
    }
};
int main(){
    Solution obj;
    cout<<"enter the size of vec";
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<obj.increasingTriplet(vec);
    return 0;
}