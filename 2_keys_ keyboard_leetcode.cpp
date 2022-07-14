#include<iostream>
using namespace std;

int minSteps(int n) {
    if(n==1){
        return 0;
    }
    int ans=0;
    for(int i=n-1;i>=2;i--){
       if(n%i==0){
          ans=n/i+ans; 
          n=i;
       } 
    }
    return ans+n;
}

int main(){
    cout<<"enter the number";
    int n;
    cin>>n;
    cout<<"required number of steps = "<<minSteps(n);
    return 0;
}