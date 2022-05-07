// time complexity is O(n^2)
#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
void my_sort( vector<string> &s){
    multimap<int,string> m;
    multimap<int,string>::iterator itr; 
    for(int i=0;i<s.size();i++){
        int sum=0;
        for(int j=0;j<s[i].size();j++){
            sum=sum+s[i][j];
        }
        m.insert(pair<int,string>(sum,s[i]));
    }
    int i=0;
    itr=m.begin();
    while(itr!=m.end()){
        s[i]=itr->second;
        itr++;
        i++;
    }
}
int main(){
   
    vector<string> s={"nitin","harsh","vikash","tiwari","nitin"};
    my_sort(s);
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }
}
