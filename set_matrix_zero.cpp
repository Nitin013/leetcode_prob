// time complexity O(n^2)

#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std; 
void setZeros(vector<vector<int>> &matrix)
{
	vector<vector<int>> vec;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]==0){
                vector<int> temp={i,j};
                vec.push_back(temp);
            }
        }
    }
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            matrix[vec[i][0]][j]=0;
        }
        for(int j=0;j<matrix.size();j++){
            matrix[j][vec[i][1]]=0;
        }
    }
}

int main(){
    vector<vector<int>> vec={{0,4,9,2},{9,1,9,5}};
    setZeros(vec);
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[0].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}
