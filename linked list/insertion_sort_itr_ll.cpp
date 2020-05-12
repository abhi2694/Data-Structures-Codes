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


node* insertNodeRec(node *head, int i, int data) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    
    if(head==NULL)
        return head;
    
    if(i==0)
    {
        node *temp = new node(data);
        temp->next = head;
        head = temp;
        return head;
    }
    
    node *temp2 = insertNodeRec(head->next,i-1,data);
    head->next = temp2;
    return head;
    
}

node* deleteNode(node *head, int i) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    
    node *temp = head;
    
    if(head==NULL)
        return head;
    
    if(i==0)
    {
        head = temp->next;
        delete temp;
        return head;
    }
    
    int c=0;
    while(temp!=NULL && c<(i-1))
    {
        temp = temp->next;
        c++;
    }
    
    if(c==i-1 && temp->next!=NULL && temp!=NULL)
        {
            temp->next = temp->next->next;
        }
    
    return head;
    
}

node* insertion_sort_LinkedList_itr(node* head)
{
    //write your code here
    if(head==NULL)
            return head;
    
    node* temp = head;
    node* temp2 = NULL;
    int n=0;
    while(temp!=NULL)
    {
        temp = temp->next;
        n++;
    }
    
    temp = head->next;
    int i, key, j; 
    
    for (i = 1; i < n; i++) 
    {  
        key = temp->data;
        temp = temp->next;
        j = 0;

        temp2 = head;
        while(j<=(i-1))
        {
            if(temp2->data<=key)
            {temp2 = temp2->next;
             j++;}
            
            else
                break;
        }
        if(j!=i)
        {
           head = deleteNode(head,i); 
           head = insertNodeRec(head,j,key);
        }
        
        //temp = temp->next;
    }
    return head;

}

