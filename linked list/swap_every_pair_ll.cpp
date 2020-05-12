// Following is the node structure
/**************
class Node {
public:
    int data;
    Node * next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
***************/

Node* swapEveryPair(Node *head) {
    //write your code here
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* curr=head->next->next;
    Node* prev=head;
    head=head->next;
    head->next=prev;
    
    while(curr!=NULL && curr->next!=NULL){
        prev->next=curr->next;
        prev=curr;
        Node* nexty=curr->next->next;
        curr->next->next=curr;
        curr=nexty;
    }
    prev->next=curr;
    return head;
    

}

