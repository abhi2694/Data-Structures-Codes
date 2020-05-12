/*************
 Following is the Node structure already written.

 template <typename T>
 class Node {
	public:
	T data;
	Node* next;
 
	Node(T data) {
 next = NULL;
 this->data = data;
	}
 
	~Node() {
 if (next != NULL) {
 delete next;
 }
	}
 };
 
*************/
Node<int>* reverse(Node<int>* head){
    Node<int>* prev = NULL;
    Node<int>* curr = head;
    Node<int>* forw = head->next;
    while(curr->next!=NULL)
    {
        curr->next = prev;
        prev = curr;
        curr = forw;
        forw = forw->next;
    }
    curr->next = prev;
    head = curr;
    return head;
}

void AlternatingSplit(Node<int>* head) {
	// Write your code here
    if(head==NULL)
        return ;
    if(head->next==NULL)
    {
        cout<<head->data<<" ";
        return ;
    }
    
    Node<int>* head1 = head;
    Node<int>* head2 = head->next;
    Node<int>* temp = head1;
    Node<int>* temp2 = head2;
    
    while(temp!= NULL && temp->next!=NULL && temp2!=NULL && temp2->next!=NULL)
    {
        if(temp->next!=NULL && temp->next->next!=NULL)
        {
            temp->next = temp2->next;
            if(temp->next!=NULL)
            temp = temp->next;
        }
        
        if(temp2->next!=NULL && temp2->next->next!=NULL)
        {
            temp2->next = temp->next;
            if(temp->next!=NULL)
            temp2 = temp2->next;
        }
    }
    
    temp->next = NULL;
    temp2->next = NULL;
    temp = head1;
    temp2 = head2;
    
     head1 = reverse(temp);
    head2 = reverse(temp2);
    
    temp = head1;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
    temp2 = head2;
    
     while(temp2!=NULL)
    {
        cout<<temp2->data<<" ";
         temp2 = temp2->next;
    }
}

