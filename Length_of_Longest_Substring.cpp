 #include<iostream>
 #include<unordered_set>
 #include<string>
 #include<vector>
 using namespace std;
    int lengthOfLongestSubstring(string &s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
           unordered_set<int> vec;
            vec.insert(s[i]);
            int temp=1;
            for(int j=i+1;j<s.size();j++){
                if(vec.find(s[j])!=vec.end()){
                    break;
                }
                vec.insert(s[j]);
                temp++;
            }
            if(temp>ans){
                ans=temp;
            } 
        }
        return ans;
    }
    int main(){
        string s;
        cout<<"enter the string";
        cin>>s;
        cout<<"Length of Longest Substring is "<<lengthOfLongestSubstring(s);
        return 0;
    }