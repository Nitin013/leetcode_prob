#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> vec;
        for(int i=0;i<s.size();i++){
                if(((int)s[i]>=97&&(int)s[i]<=122)||(s[i]>='0'&&s[i]<='9')){
                vec.push_back(s[i]);
                }
                if((int)s[i]>=65&&(int)s[i]<=90){
                    vec.push_back((int)s[i]+32);
                }

        }
        // for(int i=0;i<vec.size();i++){
        //     cout<<vec[i];
        // }
        if(vec.size()==0||vec.size()==1){
            
            return true;
        }
        int val=vec.size()-1;
        if(vec.size()%2==0){
            for(int i=0;i<=vec.size()/2;i++){
                if(vec[i]!=vec[val]){
                    return false;
                    
                }
                val--;
            }
            return true;
        }
        else{
            for(int i=0;i<vec.size()/2;i++){
                if(vec[i]!=vec[val]){
                     cout<<"ntin";
                    return false;
                   
                }
                val--;
            }
            return true;
        }

    }
};

int main(){
    Solution obj;
    string s;
    getline(cin,s);
    cout<<obj.isPalindrome(s);
    return 0;
}