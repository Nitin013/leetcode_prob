#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp;
        for(int i=0;i<numRows;i++){
            ans.push_back(temp);
        }
        for(int i=0;i<numRows;i++){
            if(i==0){
                ans[0].push_back(1);
            }
            else{
                for(int j=0;j<=ans[i-1].size();j++){
                    if(j==0||j==ans[i-1].size()){
                        ans[i].push_back(1);
                    }
                    else{
                        ans[i].push_back(ans[i-1][j]+ans[i-1][j-1]);
                    }
                }
            }
        }
        return ans;
    }
};


int main(){
    Solution obj;
    vector<vector<int>> ans;
    int numRows;
    cout<<"enter the number of rows of pascals trinagle";
    cin>>numRows;
    ans=obj.generate(numRows);
    for(int i=0;i<numRows;i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}