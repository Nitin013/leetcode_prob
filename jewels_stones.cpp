// time complexity is O(n)


#include<iostream>
#include<vector>
#include<string>
using namespace std;
int numJewelsInStones(string jewels, string stones) {
    vector<int> temp(58,0);
    for(int i=0;i<stones.size();i++){
        temp[stones[i]-'A']++;
    }
    int ans=0;
    for(int i=0;i<jewels.size();i++){
        ans=ans+temp[jewels[i]-'A'];
    }
    return ans;
}
int main(){
    string jewels,stones;
    cout<<"enter the jewels string";
    cin>>jewels;
    cout<<"enter the stones string";
    cin>>stones;
    cout<<"No.of jewels you have = "<<numJewelsInStones(jewels,stones);
}
