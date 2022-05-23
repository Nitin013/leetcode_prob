#include<iostream>
#include<vector>
#include<string>
using namespace std;
    
string convert(string s, int numRows) {
    vector<string> ans(numRows);
    string r;
    int temp=1,temp1=s.size(),k=0;
    while(temp1>0){
        if(temp==1){
            int q=0;
            for(int i=0;i<numRows&&k<=s.size()-1;i++){
                ans[i]+=s[k];
                k++;
                q=1;
            }
            if(q==1){
            temp1=temp1-numRows;
            }
        }
        if(temp==0){
            int q=0;
             for(int i=numRows-2;i>=1&&k<=s.size()-1;i--){
                 ans[i]+=s[k];
                 k++;
                 q++;
            }
            if(q!=0){
            temp1=temp1-q;
            }
        }
        if(temp==1){
            temp=0;
        }
        else{
            temp=1;
        }
    }
    for(int i=0;i<ans.size();i++){
        r+=ans[i];
    }
    if(numRows!=1){
    return r;
    }
    else{
        return s;
    }
}
int main(){
    string s;
    int rows;
    cout<<"Enter the string ";
    cin>>s;
    cout<<"Enter the no. of rows ";
    cin>>rows;
    cout<<"your zigzag pattern is = "<<convert(s,rows);
    return 0;
}