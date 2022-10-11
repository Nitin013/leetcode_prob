

#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
// class Solution {              // time complexity of this solution is O(n^3)
// public:
//     bool increasingTriplet(vector<int>& nums) {
//         for(int i=0;i<nums.size();i++){
//             int count=0;
//             int compare=nums[i];
//             if(nums.size()>=(pow(10,5))){
//                 return false;
//             }
//             for(int j=i+1;j<nums.size();j++){
//                 compare=nums[i];
//                 if(compare<nums[j]){
//                     compare=nums[j];
//                     for(int k=j;k<nums.size();k++){
//                           if(compare<nums[k]){
//                               return true;
//                           }
//                     }
//                 }
//                 }
//         }
//         return false;
//     }
// };

class Solution {         // time complexity of this solution is O(n)
public:
    bool increasingTriplet(vector<int>& nums) {
        int *smaller=new int[nums.size()];
        int *greater=new int[nums.size()];
        int min=0,max=nums.size()-1;
        smaller[min]=-1,greater[max]=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=nums[min]){
                min=i;
                smaller[i]=-1;
            }
            else{
                smaller[i]=min;
            }
        }
         for(int i=max-1;i>=0;i--){
            if(nums[i]>=nums[max]){
                max=i;
                greater[i]=-1;
            }
            else{
                greater[i]=max;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(smaller[i]!=-1&&greater[i]!=-1){
                return true;
            }
        }
        delete[] smaller;
        delete[] greater;
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
