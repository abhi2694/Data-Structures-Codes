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
#include <math.h>
int decimal(Node<int> *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int k = 0;
    Node<int>* temp = head;
    while(temp!=NULL)
    {
        temp = temp->next;
        k++;
    }
    
    temp = head;
    
    k--;
    long long int sum = 0;
    
    while(temp!=NULL)
    {
        if(temp->data==1)
        sum+=pow(2,k);
        
        k--;
        temp = temp->next;
    }
    
    return sum;
}

