/******************************************************************************
                         Time complexity=O(n^2)
*******************************************************************************/

#include <iostream>
#include<vector>
using namespace std;
    int maxArea(vector<int>& height) {
        int area=0;
        for(int i=0;i<height.size();i++){
            for(int j=i+1;j<height.size();j++){
                if(height[i]<height[j]){
                    if(height[i]*(j-i)>area){
                        area=height[i]*(j-i);
                    }
                }
                else{
                    if(height[j]*(j-i)>area){
                        area=height[j]*(j-i);
                    }
                }
            }
        }
        return area;
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
    cout<<maxArea(nums);
    return 0;
}
