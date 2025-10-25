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
    void printLL(node *temp){
        while(temp!=NULL){
            cout<<temp->data<<"-->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
    node * removeNthFromEnd(ListNode* head, int n){
        if(head==NULL){//0 nodes
            return NULL;
        }
        else if(head->next==NULL){//1 node
            delete head;head=NULL;
            return head;
        }
        else{
            node*f=head,*s=head;
            for(int i=0;i<n;i++){
                if(f!=NULL){
                    f=f->next;
                }
            }
            while(f!=NULL){
                f=f->next;
                s=s->next;
            }
            //cout<<"data is:"<<s->data;
            //s is the node I have to remove
            //if s is 1st element of ll
            if(s==head){
                head=head->next;
                return head;
            }
            else{
                node*temp=head;
                while(temp->next!=s and temp->next!=NULL){
                    cout<<temp->data;
                    temp=temp->next;
                }
                temp->next=s->next;
                return head;
            }
        }
    }

};
