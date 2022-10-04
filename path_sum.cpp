// Time complexity is O(n).

#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
     int val;
      TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
     bool solve(TreeNode* root,int sum){
        if(!root) return false;
        if( sum==root->val && !root->left && !root->right) return true;
        if(solve(root->left,sum-root->val)){
            return true;
        }
       else{
           return solve(root->right,sum-root->val);
       }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return solve(root,targetSum);
    }
};

int main(){
    Solution obj;
    struct TreeNode* root=new(TreeNode);
    root->val=2;
    struct TreeNode* newnode=new(TreeNode);
    newnode->val=1;
    root->left=newnode;
    int targetsum;
    cin>>targetsum;
    cout<<obj.hasPathSum(root,targetsum);
    return 0;
}
