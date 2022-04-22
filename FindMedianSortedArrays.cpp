#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        multiset<int> st;
        double ans;
        vector<int> vec;
        for(int i=0;i<nums1.size();i++){
            st.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            st.insert(nums2[i]);
        }
        multiset<int>::iterator itr;
        itr=st.begin();
        for(int i=0;i<st.size()&&itr!=st.end();i++){
            vec.push_back(*itr);
            itr++;
        }
        if(vec.size()%2==0){
            double a=vec[vec.size()/2],b=vec[vec.size()/2-1];
            ans= (a+b)/2;
            return ans;
        }
        else{
            ans=vec[vec.size()/2];
            return ans;
        }
        
    }
int main(){
   vector<int> nums1={1,5},nums2={1,2,3,4};
   cout<<findMedianSortedArrays(nums1,nums2);
}