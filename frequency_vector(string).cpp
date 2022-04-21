/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>
#include<string>
#include<map>
#include<unordered_set>
using namespace std;
void frequency(vector<string> &st){
     unordered_set<string> s;
    map<string,int> mp;
    vector<int> vec;
    for(int i=0;i<st.size();i++){
        s.insert(st[i]);
    }
    for (auto it=s.begin();it!=s.end();++it){
        int temp=0;
        for(int j=0;j<st.size();j++){
            if(*it==st[j]){
                temp++;
            }
        }
        mp.insert(pair<string,int>(*it,temp));
    }
    map<string,int>::iterator itr;
    for(itr=mp.begin();itr!=mp.end();++itr){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    
    
}
using namespace std;
int main()
{
    vector<string> st;
    int n;
    cout<<endl<<"0. to enter the string"<<endl<<"1. to stop enter string";
    cin>>n;
    while(n==0){
       string s;
       cin>>s;
       st.push_back(s);
       cout<<"0. to enter the string"<<endl<<"1. to stop enter string";
       cin>>n;
    }
    frequency(st);
    return 0;
}
