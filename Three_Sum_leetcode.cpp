# time complexity is o(n^2*logn)

#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
   vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp(3);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size()-1;j++){
                if(binary_search(nums.begin()+j+1,nums.end(),-nums[i]-nums[j])){
                    temp[0]=nums[i];
                    temp[1]=nums[j];
                    temp[2]=-nums[i]-nums[j];
                    ans.push_back(temp);
                }
            }
        }
        for(int i=0;i<ans.size();i++){
            sort(ans[i].begin(),ans[i].end());
        }
        for(int i=0;i<ans.size();i++){
            for(int j=i+1;j<ans.size();j++){
                if(ans[i][0]==ans[j][0]&&ans[i][1]==ans[j][1]&&ans[i][2]==ans[j][2]){
                    ans.erase(ans.begin()+j);
                    j--;
                }
            }
        }
        return ans;
    }
    int main(){
        vector<int> temp;
        cout<<"Enter the element in the array";
        int n=1;
        while(n==1){
            int val;
            cin>>val;
            temp.push_back(val);
            cout<<"1. Enter the element in the array"<<endl<<"2. To get the three sum";
            cin>>n;
        }
        vector<vector<int>> ans;
        ans=threeSum(temp);
        cout<<"#####################     Three sum is   ###############"<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<i+1<<". ";
            for(int j=0;j<3;j++){
                cout<<ans[i][j];
            }
            cout<<endl;
        }
    }
