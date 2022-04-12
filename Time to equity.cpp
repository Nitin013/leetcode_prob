
#include <iostream>
#include<vector>
void TimeToEquity(std::vector<int> &vec){
    int ans=0;
    for(int i=0;i<vec.size()-1;i++){
        if(vec[i]>vec[i+1]){
            int temp=vec[i];
            vec[i]=vec[i+1];
            vec[i+1]=temp;
        }
    }
    for(int i=0;i<vec.size()-1;i++){
        ans=ans+vec[vec.size()-1]-vec[i];
    }
    std::cout<<ans;
    
}
int main()
{
    int n=0;
    std::vector<int> vec;
    while(n!=1){
        std::cout<<"enter the element in the array";
        int temp;
        std::cin>>temp;
        vec.push_back(temp);
        std::cout<<"press 1. to stop"<<std::endl<<"press 2. to continue";
        std::cin>>n;
    }
    TimeToEquity(vec);
    
}

