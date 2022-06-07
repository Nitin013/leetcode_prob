

#include <iostream>
#include<vector>
using namespace std;
class graph_node{
    public:
     int data;
     vector<graph_node*> vec;
     void print(vector<graph_node> &temp){
         for(int i=0;i<temp.size();i++){
            cout<<temp[i].data<<"---->";
            for(int j=0;j<temp[i].vec.size();j++){
              cout<<temp[i].vec[j]->data<<","; 
            }  
        cout<<endl;
        }
     }
};

int main()
{
    graph_node n;
    int num;
    cout<<"enter the no. of nodes of graph";
    cin>>num;
    vector<graph_node> temp(num);
    for(int i=0;i<num;i++){
        cout<<"enter the data in the "<<i+1<<" element";
        cin>>temp[i].data;
    }
    int i;
    cout<<"enter 1 make connection";
    cin>>i;
    while(i!=0){
        switch(i){
            case 1:
             int parent,child;
             cout<<"enter the no. of parent node";
             cin>>parent;
             cout<<"enter the no. of child node";
             cin>>child;
             temp[parent-1].vec.push_back(&temp[child-1]);
             break;
            case 2:
             n.print(temp);
             break;
            default:
             break;
        }
        cout<<"0. to stop"<<endl<<"1. to make connection"<<endl<<"2. to print the graph";
        cin>>i;
    }
    return 0;
}
