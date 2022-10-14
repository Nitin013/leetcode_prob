// time complexity is O(n)

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        if(n!=1){
            n=n/2;
            temp=head;
            for(int i=1;i<=n;i++){
                if(i==n){
                    temp->next=temp->next->next;
                }
                else{
                    temp=temp->next;
                }
            }
        }
        else {
            return NULL;
        }
        return head;
    }
};
