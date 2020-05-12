node* append_LinkedList(node* head,int n)
{
    //write your code here
    node* temp = head;
    int l = 0;
    while(temp->next!=NULL)
    {
        temp = temp->next;
        l++;
    }
    l++;
    
    int k = 0;
    node* temp2 = head;
    while(k<(l-n-1))
    {
        temp2 = temp2->next;
        k++;
    }
    
    node* temp3 = head;
    head = temp2->next;
    temp->next = temp3;
    temp2->next = NULL;
    return head;
    
}
