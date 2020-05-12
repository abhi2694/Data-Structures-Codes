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

int indexOfNRecursive(Node *head, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    if(head==NULL)
        return -1;
    
    if(head->data == n)
        return 0;
    
    int a = indexOfNRecursive(head->next,n);
    if(a==-1)
        return a;
    else
        return a+1;
}



