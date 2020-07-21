//head is the head of you linked list
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

node *reverse_linked_list(node *head)
 {
  if(head==NULL||head->next==NULL)
   return head;
   
    node* smallhead = reverse_linked_list(head->next); 
	head->next->next=head; 
	head->next=NULL;
	 return smallhead;
	 
}
 
bool check_palindrome(node* head)
 {
  node*i=head,*temp=head; 
  
  while(temp!=NULL&&temp->next!=NULL)
   { 
   i=i->next;
   temp=temp->next->next;
   }
   
    
	 node*smallhead=reverse_linked_list(i);
	  temp=head;
	   while(temp!=NULL&&smallhead!=NULL) 
	   {
	    if(temp->data==smallhead->data) 
		{
		 temp=temp->next;
		  smallhead=smallhead->next;
	    } 
	    
	    else 
		return false;
		 }
		 
		  return true;
		}
