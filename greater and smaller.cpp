#include <iostream>
#include<vector>
void SmallerGreater(std::vector<int> vec){
    int small=0,large=0;
    for(int i=0;i<vec.size()-1;i++){
        if(vec[i]>vec[i+1]){
            int temp=vec[i];
            vec[i]=vec[i+1];
            vec[i+1]=temp;
        }
    }
    for(int i=vec.size()-2;i>=0;i--){
        if(vec[i]>vec[i+1]){
            int temp=vec[i];
            vec[i]=vec[i+1];
            vec[i+1]=temp;
        }
    }
    for(int i=0;i<vec.size();i++){
        if(vec[i]==vec[0]){
            small++;
        }
        if(vec[i]==vec[vec.size()-1]){
            large++;
        }
    }
    std::cout<<std::endl<<vec.size()-small-large;
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
    SmallerGreater(vec);
}

