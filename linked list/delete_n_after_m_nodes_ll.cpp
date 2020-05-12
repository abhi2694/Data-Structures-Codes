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

node* skipMdeleteN(node *head, int m, int n) {
    // Write your code here
    node* temp = head;
    int i=0;
    while(i<m-1)
    {
        temp = temp->next;
        i++;
    }
    
    i=0;
    
    if(m==0 && n==0)
        return NULL;
    
    if(m==0)
        return NULL;
    
    if(n==0)
        return head;
    
    while(temp!=NULL)
    {
            while(i<n)
            {
                if(temp!=NULL && temp->next!=NULL)
                {
                node* temp2 = temp->next;
                temp->next = temp->next->next;
                delete temp2;
                }
                else
                    break;
                i++;
            }
        i = 0;
        while(i<m)
        {
            if(temp!=NULL)
            {temp = temp->next;
            i++;
            }
            else
                break;
        }
        i=0;
    }
    
    return head;    
}

