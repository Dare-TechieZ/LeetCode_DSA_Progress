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
#define node ListNode
#define data val
class Solution {
public:
    node* reverseList(ListNode* head){
        node*temp=head;
        if(head==NULL){//no element
            return head;
        }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        node *prev=NULL;node*current=head;
        
        while(current!=NULL){
            node*n=current->next;//n moves ahead current
            current->next=prev;//reversing next adr
            prev=current;//moving prev to current
            current=n;//moving current to n
        }
        swap(head,temp);
        return head;
    }

};
