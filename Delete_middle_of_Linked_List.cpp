/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        int mid=len/2;
        ListNode* temp2=head;
        if(mid==0){
            return NULL;
        }
        ListNode* prev=NULL;
       
        int n=0;
        while(temp2!=NULL){
           
            if(n==mid-1){
                ListNode* curr=temp2->next;
                prev=temp2;
                prev->next=temp2->next->next;
                temp2=curr->next;
                delete(curr);
            }
            else{
            temp2=temp2->next;
            }
             n++;
        }

      return head;  
    }
};
