#include<iostream>
#include<vector> 
using namespace std;
void max_area(vector<vector<int>>& grid,int row,int column,int &temp_ans){
    temp_ans++;
    grid[row][column]=0;
    if(row>0&&grid[row-1][column]!=0){
        max_area(grid,row-1,column,temp_ans);
    }
    if(row<(grid.size()-1)&&grid[row+1][column]!=0){
        max_area(grid,row+1,column,temp_ans);
    }
    if(column>0&&grid[row][column-1]!=0){
        max_area(grid,row,column-1,temp_ans);
    }
    if(column<(grid[row].size()-1)&&grid[row][column+1]!=0){
        max_area(grid,row,column+1,temp_ans);
    }
    return;
}
int maxAreaOfIsland(vector<vector<int>>& grid) {
    int ans=0;
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[i].size();j++){
            if(grid[i][j]!=0){
                int temp_ans=0;
                max_area(grid,i,j,temp_ans);
                if(ans<temp_ans){
                    ans=temp_ans;
                }
            }
            
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> vec;
    cout<<"enter the size of no. of rows ans column";
    int i,j;
    cin>>i>>j;
    vector<int> v(j);
    for(int k=0;k<i;k++){
        vec.push_back(v);
    }
    cout<<"enter element of island matrix";
    for(int k=0;k<i;k++){
        for(int l=0;l<j;l++){
            cin>>vec[k][l];
        }
    }
    cout<<"max size of island is"<<maxAreaOfIsland(vec);
}