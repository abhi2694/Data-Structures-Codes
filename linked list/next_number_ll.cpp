/**********
 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
*********/

Node* reverse(Node* head)
{
    if(head==NULL || head->next==NULL)
        return head;
    Node* p = head;
    Node* c = p->next;
    Node* n = c->next;
    p->next = NULL;
    while(c->next!=NULL)
    {
        c->next = p;
        p = c;
        c = n;
        n = n->next;
    }
    c->next = p;
    return c;
}

Node* NextLargeNumber(Node *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    head = reverse(head);
    
    head->data+=1;
    int carry = 0;
    if(head->data>9)
    {
        head->data%=10;
        carry = 1;
    } 
    
    Node* temp = head->next;
    if(temp==NULL)
        return head;
   
    while(temp->next!=NULL)
    {
        temp->data+=carry;
        if(temp->data>9)
        {
        temp->data%=10;
        carry = 1;
        } 
        else
            carry = 0;
        
        temp = temp->next;
    }
    temp->data+=carry;
        if(temp->data>9)
        {
        temp->data%=10;
        carry = 1;
        } 
        else
            carry = 0;
    
    if(carry==1)
    {
        Node* temp2 = new Node(carry);
        temp->next = temp2;
        temp2->next = NULL;
    }
    return reverse(head);
}



