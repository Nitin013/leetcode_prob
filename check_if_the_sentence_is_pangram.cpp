#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> frncy('z'-'a'+1,0);
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]!=' '){
                frncy[sentence[i]-'a']++;
            }
        }
        for(int i=0;i<frncy.size();i++){
            if(frncy[i]==0){
                return false;
            }
        }
        return true;
    }
};
int main(){
    Solution obj;
    string s;
     cin>>s;
     cout<<obj.checkIfPangram(s);

}