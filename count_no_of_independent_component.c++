#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>
using namespace std;

//################ solution using bfs ###############;
 int count_no_of_independent_component(vector<vector<int>> &grph){
     vector<bool> visited(grph.size(),false);
     queue<int> temp;
     int count=0;
     for(int i=0;i<grph.size();i++){
         if(!visited[i]){
             count++;
             int component=0;
             temp.push(i);
             visited[i]=true;
             while(!temp.empty()){
                 for(int j=0;j<grph.size();j++){
                     if(j!=temp.front()&&!visited[j]&&grph[temp.front()][j]){
                         temp.push(j);
                         visited[j]=true;
                     }
                 }
                 temp.pop();
                 component++;
             }
             cout<<"no. of nodes in component="<<component<<endl;
         }
     }
     return count;
 }

// // ################### solution by dfs ##################
// int count_no_of_independent_component(vector<vector<int>> &grph)
// {
//     vector<bool> visited(grph.size(), false);
//     stack<int> temp;
//     int count = 0;
//     for (int i = 0; i < grph.size(); i++)
//     {

//         if (!visited[i])
//         {
//             count++;
//             int component=0;
//             temp.push(i);
//             visited[i] = true;
//             while (!temp.empty())
//             {
//                 int val = temp.top();
//                 temp.pop();
//                 component++;
//                 for (int j = 0; j < grph.size(); j++)
//                 {

//                     if (!visited[j] && grph[val][j])
//                     {
//                         temp.push(j);
//                         visited[j] = true;
//                     }
//                 }
//             }
//             cout<<"no. of node in the component ="<<component<<endl;
//         }
//     }
//     return count;
// }
int main()
{
    cout << "enter the no. of nodes of graph";
    int n;
    cin >> n;
    vector<vector<int>> grph(n, vector<int>(n, 0));
    int i = 1;
    while (i)
    { // to get realtion between nodes
        cout << "enter the path ";
        int k, j;
        cin >> k >> j;
        grph[k][j] = 1;
        cout << "enter 1 to make more connection" << endl
             << "enter 0 to stop ";
        cin >> i;
    }
    cout << count_no_of_independent_component(grph);
    return 0;
}
