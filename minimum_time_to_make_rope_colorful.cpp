#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int sum=0;
        int start=-1,end=-1;
        for(int i=0;i<colors.size()-1;i++){
            if(colors[i]==colors[i+1]){
                if(start==-1){
                    start=i;
                }
            }
            if(colors[i]!=colors[i+1]||i+1==colors.size()-1){
                if(start!=-1){
                    if(colors[i]==colors[i+1]){
                    end=i+1;
                    sort(neededTime.begin()+start,neededTime.end());
                    for(int j=start;j<end;j++){
                        sum=sum+neededTime[j];
                    }
                    }
                    else{
                       end=colors.size()-i-1;
                        sort(neededTime.begin()+start,neededTime.end()-end);
                    for(int j=start;j<i;j++){
                        sum=sum+neededTime[j];
                    } 
                    }
                    start=-1;
                    end=-1;
                }
            }
        }
        
        return sum;
    }
};

int main(){
    Solution obj;
    string s;
    cout<<"enter the string of colors"<<endl;
    cin>>s;
    vector<int> vec(s.size());
    cout<<"enter the timeneeded arrau";
    for(int i=0;i<s.size();i++){
        cin>>vec[i];
    }
    cout<<obj.minCost(s,vec);
}