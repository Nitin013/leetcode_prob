#include <iostream>
#include<vector>
using namespace std;
void subarr(vector<int> &vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
        vector<int> temp;
        temp.push_back(vec[i]);
        for(int j=i+1;j<vec.size();j++){
            temp.push_back(vec[j]);
            for(int k=0;k<temp.size();k++){
                cout<<temp[k];
            }
            cout<<endl;
        }
        
    }
}

int main()
{
    vector<int> vec;
    cout<<"enter the size of vector";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cout<<"enter the element ";
        cin>>temp;
        vec.push_back(temp);
    }
    subarr(vec);

    return 0;
}
