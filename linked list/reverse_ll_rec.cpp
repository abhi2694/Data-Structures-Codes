// Following is the node structure
/**************
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/
node *reverse_linked_list_rec(node *head)
{
    //write your recursive code here
    if(head==NULL || head->next==NULL)
        return head;
    
    node* temp = reverse_linked_list_rec(head->next);
    head->next->next = head;
    head->next = NULL;
    return temp;
}


