#include <iostream>
#include<vector>
using namespace std;
  int findClosestNumber(vector<int>& nums) {
        int negative=-1000001,positive=1000001;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                if(nums[i]<positive){
                    positive=nums[i];
                }
            }
            if(nums[i]<=0){
                if(nums[i]>=negative){
                    negative=nums[i];
                }
            }
        }
        if(-1*negative<positive){
            return negative;
        }
        else if(-1*negative>=positive&&nums.size()!=1){
         return positive;
        }
        else return 0;
    }
int main()
{
    vector<int> nums;
    int n;
    cout<<"enter the size of n";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the element in arr";
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    cout<<findClosestNumber(nums);
    return 0;
}
