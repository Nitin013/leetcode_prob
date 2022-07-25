#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int number_changed_coins(vector<int> &coins,int target){
    vector<int> vec;
    int count=0;
    if(target==0){
        return 0;
    }
    
    for(int i=0;i<coins.size();i++){
        if(target<coins[i]){
            continue;
        }
        count++;
        vec.push_back(number_changed_coins(coins,target-coins[i]));
    }
    if(count==0){
        return 100;
    }
    sort(vec.begin(),vec.end());
    return 1+vec[0];
}
int main(){
    vector<int> coins;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        int val;
        cin>>val;
        coins.push_back(val);
    }
    cout<<"enter the target coin";
    int target;
    cin>>target;
    cout<<number_changed_coins(coins,target);
    return 0;
}