class node{
    public:
    int data;
    node*next;
    node(int d){
        data=d;
        next=NULL;
    }
};
class MinStack {
public:
    node*head;
    MinStack() {
        head=NULL;
    }
    
    void push(int val) {
        node *n=new node(val);
        n->next=head;
        head=n;
    }
    
    void pop() {
        node *temp=head;
        head=head->next;
        delete temp;
    }
    
    int top() {
        return head->data;
    }
    
    int getMin() {
        int mini=INT_MAX;
        node*temp=head;
        while(temp!=NULL){
            if(temp->data<mini){
                mini=temp->data;
            }
            temp=temp->next;
        }
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
