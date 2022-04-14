#include<iostream>
#include<vector>
using namespace std;
 void subarraySum(vector<int>& nums, int k) {
        int ans=0,sum;
        for(int i=0;i<nums.size();i++){
            sum=0;
               for(int j=i;j<nums.size();j++){
                   sum=sum+nums[j];
                   if(sum==k){
                       ans++;
                   }
               }
        }
        cout<<ans;
    }
int main(){
    vector<int> vec;
    int n;
    cout<<"enter the size of arr";
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cout<<"enter the element";
        cin>>temp;
        vec.push_back(temp);
    }
    cout<<"enter the sum";
    cin>>n;
    subarraySum(vec,n);
    return 0;
}