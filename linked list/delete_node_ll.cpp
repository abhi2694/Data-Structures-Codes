Node* deleteNode(Node *head, int i) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    if(head==NULL)
        return head;
    
    if(i==0)
    {
        Node* temp2 = head;
        head = head->next;
        delete temp2;
        return head;
    }
    
    Node * temp3 = deleteNode(head->next,i-1);
    head->next = temp3;    
}


