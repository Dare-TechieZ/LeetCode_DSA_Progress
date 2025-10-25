/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#define node ListNode
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //Fast n slow pointer thinkig,if fast meets slow->cycle hai
        node*f=head,*s=head;
        while(f!=NULL and f->next!=NULL){//0 element and 1 element
            f=f->next->next;
            s=s->next;
            if(f==s)    return true;   
        }
        return false;
    }
};
