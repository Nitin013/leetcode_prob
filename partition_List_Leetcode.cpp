#include<iostream>
#include<vector>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *bck1,*bck2,*fnt1,*fnt2;
        bck2=head;
        while(bck2!=NULL&&bck2->val<x){
          
            if(bck2->next!=NULL&&bck2->next->val>=x){
                bck1=bck2;
            }
              bck2=bck2->next;
        }
        if(bck2==NULL||bck2->next==NULL){
           return head;
        }
        if(bck2!=head){
            fnt1=bck2;
            fnt2=bck2->next;
            while(fnt2!=NULL){
                if(fnt2->val<x){
                    fnt1->next=fnt2->next;
                    fnt2->next=bck2;
                    bck1->next=fnt2;
                    fnt2=fnt1->next;
                    bck1=bck1->next;
                }
                else{
                    fnt2=fnt2->next;
                    fnt1=fnt1->next;
                }
            }
        }
        if(bck2==head){
            fnt1=bck2;
            fnt2=bck2->next;
            if(fnt2!=NULL&&bck2==head){
                if(fnt2->val<x){
                    fnt1->next=fnt2->next;
                    fnt2->next=head;
                    head=fnt2;
                    bck1=head;
                    fnt2=fnt1->next;
                }
                else{
                    fnt1=fnt1->next;
                    fnt2=fnt2->next;
                }
            }
            while(fnt2!=NULL){
                if(fnt2->val<x){
                    
                    fnt1->next=fnt2->next;
                    fnt2->next=bck2;
                    if(bck2==head){
                        bck1=fnt2;
                        head=bck1;
                        
                    }
                    else{
                        bck1->next=fnt2;
                        bck1=bck1->next;
                    }
                    fnt2=fnt1->next;
                }
                else{
                    fnt2=fnt2->next;
                    fnt1=fnt1->next;
                }
            }            
        }
        return head;
    }
};
int main(){
    Solution obj;
    struct ListNode *head,*temp;
    head=new ListNode;
    temp=head;
    cout<<"enter the value of head node";
    cin>>head->val;
    int i;
    cout<<"to enter more node click 1"<<endl<<"to get real head click 0";
    cin>>i;
    while(i){
        struct ListNode *newnode=new ListNode;
        cin>>newnode->val;
        temp->next=newnode;
        temp=newnode;
        cout<<"to enter more node click 1"<<endl<<"to get real head click 0";
        cin>>i;
    }
    cout<<"enter the target element";
    cin>>i;
    obj.partition(head,i);
    while(head!=NULL){
        cout<<head->val;
        head=head->next;
    }
    return 0;
}