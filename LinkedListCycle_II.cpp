/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#define node ListNode
#define data val
class Solution {
public:
    node *detectCycle(ListNode *head) {
        node*f=head,*s=head;
        while(f!=NULL and f->next!=NULL){
            f=f->next->next;
            s=s->next;
            if(f==s){
                s=head;
                while(f!=s){
                    s=s->next;
                    f=f->next;
                }
                return f;
            }
        }
        return NULL;
    }
// return the node where the cycle begins. If there is no cycle, return null.
        //where ever slow and fast meets->fast ke agle hi step pr cycle ki start wali node hogi
};
