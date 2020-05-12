Node* insertNodeRec(Node *head, int i, int data) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    if(i==0)
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
        return head;
    }
    
    if(head==NULL)
        return head;
    
    Node *temp2 = insertNodeRec(head->next,i-1,data);
    head->next = temp2;
    return head;
}
