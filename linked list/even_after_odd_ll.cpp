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

node* arrange_LinkedList(node* head)
{
    //write your code here
    if(head==NULL)
        return head;
    node* temp = head;
    int k=0;
    while(temp!=NULL)
    {
        temp = temp->next;
        k++;
    }
    
    temp = head;
    
    int i=0;
    
    while(temp->data%2==0)
    {
        if(i==k)
            break;
        node* temp2 = temp;
        temp = temp->next;
        temp2->next = NULL;
        head = temp;
        node* temp3 = temp;
            while(temp3->next!=NULL)
            {
                temp3 = temp3->next;
            }
            temp3->next = temp2;
        i++;
    }
    
    if(temp->data%2==0)
        return head;
    
    while(temp->next!=NULL)
    {
        if(i==(k-1))
            break;
        if(((temp->next->data %2)==0))
        {
            node* temp2 = temp->next;
            temp->next = temp->next->next;
            temp2->next = NULL;
            
            node* temp3 = temp->next;
            while(temp3->next!=NULL)
            {
                temp3 = temp3->next;
            }
            temp3->next = temp2;
        }
        else
            temp = temp->next;
        
        i++;
    }
    
    return head;
}

