#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
   int singleNumber(vector<int>& arr) {
       if(arr.size()%2==0){
           return -1;
       }
        int n = arr.size(); 
        unordered_map<int, int> mp; 
        for(int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        
        int ans; 
        for(auto x: mp) 
        {
            if(x.second == 1) 
            {
                ans = x.first; 
                return ans;
            }
        }
        
        return ans; 
    }
};


int main(){
    Solution obj;
    cout<<"enter the size of array";
    int n;
    cin>>n;
    vector<int> nums(n);
    cout<<"enter the element of array";
    for(int i=0;i<nums.size();i++){
        cin>>nums[i];
    }
    cout<<obj.singleNumber(nums);
    cout<<endl<<"if ans is -1 it means there is no single number ";
    return 0;
    
}