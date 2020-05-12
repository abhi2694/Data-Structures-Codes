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


Node<int>* moveToFront(Node<int> *head) {
	// Write your code here
    Node<int>* temp = head;
    while(temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    
    Node<int>* temp2 = temp->next;
    temp->next = NULL;
    
    temp2->next = head;
    head = temp2;
    return head;
    
}

