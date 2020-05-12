//head is the head of the linked list
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

node* swap_nodes(node *head,int i,int j)
{
    //write your code here
    if(i>j)
    {
        int temp = i;
        i = j;
        j = temp;
    }
    
    if(i==j) ;
    
        
    else if((i==0) && ((j-i)==1))
    {
    node *c1 = head;
    node *c2 = head->next;
    c1->next = c2->next;
    c2->next = c1;
    head = c2;
    }
    
    
    else if(i==0)
    {
    node *p1 = head;
    node *c1 = head->next;
    node *p2 = NULL;
    node *c2 = head;
    int k=0;
    while(k<j)
    {
       p2 = c2;
       c2 = c2->next;
        k++;
    }
        
    p2->next = p1;
    p1->next = c2->next;
    c2->next = c1;
    head = c2;
    }
    
    else if((j-i)==1)
    {
    node *p1 = NULL;
    node *c1 = head;
    node *p2 = head;
    node *c2 = head->next;
    
    int k=0;
    while(k<i)
    {
       p1 = c1;
        c1 = c1->next;
        k++;
    }
    k=0;
    while(k<j)
    {
       p2 = c2;
       c2 = c2->next;
        k++;
    }
    
    c1->next = c2;
    p2->next = c1;
    p1->next = p2;        
    }

    else
    {
    node *p1 = NULL;
    node *c1 = head;
    node *n1 = head->next;
    node *p2 = NULL;
    node *c2 = head;
    
    int k=0;
    while(k<i)
    {
       p1 = c1;
        c1 = n1;
        n1 = n1->next;
        k++;
    }
    k=0;
    while(k<j)
    {
       p2 = c2;
       c2 = c2->next;
        k++;
    }
    
    c1->next = c2->next;
    p2->next = c1;
    p1->next = c2;
    c2->next = n1;
    }
    return head;
}


node* bubble_sort_LinkedList_itr(node* head)
{
    //write your code here
    node* temp  = head;
    node* temp2 = NULL;
    int c=0;
    while(temp!=NULL)
    {
        temp  = temp->next;
        c++;
    }
    //temp = head;
    for(int i=0;i<(c-1);i++)
    {
        temp = head;
        if(temp->data>temp->next->data)
            {
                head = swap_nodes(head,0,1);
                //temp = head->next;
            }
        else
            temp = temp->next;
        
        for(int j=1;j<(c-1-i);j++)
        {
            if(temp->data>temp->next->data)
            {
                temp2 = swap_nodes(head,j,j+1);
                //temp = temp->next;
            }
            else
                temp = temp->next;
        }
    }
    
    return head;
}

