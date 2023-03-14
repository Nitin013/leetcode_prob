#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={2,5,4,79,7,1,2,9,80,56};
    int gap=vec.size()/2;
    for(gap=vec.size()/2;gap>=1;gap=gap/2){
        for(int j=gap;j<vec.size();j++){
            for(int i=j-gap;i>=0;i-=gap){
                if(vec[i+gap]>vec[i]){
                    break;
                }
                else{
                    swap(vec[i+gap],vec[i]);
                }
            }
        }
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}