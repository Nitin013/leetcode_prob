//  time complexity O(s) , where size of s is size of string

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool equalFrequency(string word) {
        vector<int> temp('z'-'a'+1,0);
        for(int i=0;i<word.size();i++){
            temp[word[i]-'a']++;
        }
        int count=0;
        for(int i=0;i<temp.size();i++){
            if(temp[i]>1){
                break;
            }
            count++;
            
        }
        if(count==temp.size()){
            return true;
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++){
            if(temp[i]==0){
                continue;
            }
            if(temp[i]==1){
                for(int j=i+1;j<temp.size();j++){
                    if(temp[i+1]!=temp[j]){
                        count=0;
                        break;
                    }
                }
                if(count!=0){
                return true;
                }
            }
        }
        temp[temp.size()-1]--;
        for(int i=0;i<temp.size();i++){
            if(temp[i]!=0&&temp[i]!=temp[temp.size()-1]){
                return false;
            }
        }
        return true;
    }
};
int main(){
    Solution obj;
    cout<<"enter the string";
    string s;
    cin>>s;
    cout<<obj.equalFrequency(s);
}

