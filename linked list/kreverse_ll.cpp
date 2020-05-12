//head is the head of the linked list, n is number of elements to be reversed
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

node* kReverse(node*head,int k)
{
    //write your code here
      if(head==NULL){
      return head;
  }
  node *curr=head;
  node *prev=NULL;
  node *Next=NULL;
  int count=0;
  while(curr!=NULL && count < k){
      Next=curr->next;
      curr->next=prev;
      prev=curr;
      curr=Next;
      count++;
  }

  if(Next!=NULL){
     head->next=kReverse(Next,k);
  }

  return prev;
}

