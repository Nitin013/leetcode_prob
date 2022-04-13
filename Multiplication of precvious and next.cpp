#include <iostream>
#include<vector>
using namespace std;
void Mul_pre_Nex(vector<int> vec){
    vector<int> ans(vec.size(),0);
    for(int i=0;i<vec.size();i++){
        if(i==0){
            ans[i]=vec[0]*vec[1];
        }
        else if(i==vec.size()-1){
            ans[vec.size()-1]=vec[vec.size()-1]*vec[vec.size()-2];
        }
        else{
            ans[i]=vec[i-1]*vec[i+1];
        }
    }
    cout<<"Answer is = ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main()
{
  vector<int> vec;
  int n=0;
  while(n==0){
      int temp;
      cout<<"enter the element in the array";
      cin>>temp;
      vec.push_back(temp);
      cout<<"press 0. to add element in the array"<<endl<<"press 1. to for the execution of mul of precious and next ";
      cin>>n;
  }
  Mul_pre_Nex(vec);
    return 0;
}
