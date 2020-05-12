/*************
 Following is the Node<int> structure already written.

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

Node<int>* func(Node<int> *head,int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int c=0;
    Node<int>* temp = head;
    while(temp!=NULL)
    {
        temp = temp->next;
        c++;
    }
    
    temp = head;
    
    int i=0;
     
    while(temp->data==n)
    {
        Node<int>* temp2 = temp;
        temp = temp->next;
        Node<int>* temp3 = temp;
        while(temp3->next!=NULL)
        {
            temp3 = temp3->next;
        }
        temp3 ->next = temp2;
        temp2->next = NULL;
        i++;
    }
    
    head = temp;
    
    while(temp->next!=NULL && i<c)
    {
        if(temp->next->data==n)
        {
            Node<int>* temp2 = temp->next;
            temp->next = temp->next->next;
            temp2->next = NULL;
            Node<int>* temp3 = temp;   
    
            while(temp3->next!=NULL)
            {
               temp3 = temp3->next; 
            }
            
            temp3->next = temp2;
            temp2->next = NULL;
        }
        else
        temp = temp->next;
        
        i++;
    }
    return head;
    
}

