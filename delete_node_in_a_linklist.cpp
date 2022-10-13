  //  time complexity O(1)

  #include<iostream>
  #include<vector>
  #include<string>
  using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    void deleteNode(ListNode* node) {
      node -> val = node -> next -> val;
	    node -> next = node -> next -> next;
    }
};
int main(){
    Solution obj;
    ListNode* head=new ListNode(4);
    ListNode* newnode=new ListNode(5);
    head->next=newnode;
    ListNode* newnode1=new ListNode(6);
    head->next->next=newnode1;
   
    obj.deleteNode(newnode);
    while(head!=NULL){
        cout<<head->val<<endl;
        head=head->next;
    }
    return 0;
}
