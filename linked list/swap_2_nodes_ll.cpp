//head is head of your linked list, i and j are indexes to be swapped
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
#include<bits/stdc++.h>
node* swap_nodes(node *head,int i,int j)
{
    //write your code here
    if(i>j)
    {
       int temp = i;
        i = j;
        j = temp;
    }
    
     if(i==j)
    {
        return head;
    }
    
    else if(i==0)
    {
        if(j==1)
        {
            node* t = head;
            node* t2 = t->next;
            node* t3= t2->next;
            
            head = t3;
            t2->next = t;
            t->next = t3;
            head = t2;
        }
        
        else
        {
        int k = 0;
        node* temp = head;
        node* temp2 = head;
        while(temp2!=NULL)
        {
            if(k==j-1)
            {
                node* temp3 = temp2->next;
                head = head->next;
                temp->next = temp3->next;
                temp2->next = temp;
                temp3->next = head;
                head = temp3;
                break;
            }
            k++;
            temp2 = temp2->next;
        }
        }
        return head;
        }
    
    else if(j==i+1)
    {
        int k = 0;
        node *t = head;
        node* t2 = head;
        while(t2!=NULL)
        {
            if(k==i-1)
            {
                node* t3 = t2->next;
                node* t4 = t3->next;
                node* t5 = t4->next;
                t2->next = t4;
                t4->next = t3;
                t3->next = t5;
            }
            t2 = t2->next;
            k++;
        }
        return head;
    }
    
    else
    {
        int k=0;
        node* t = head;
        node* t2 = head;
        node* t3 = NULL;
        node* t4 = NULL;
        node* t5= NULL;
        node* t6 = NULL;
        while(t!=NULL && t2!=NULL)
        {
            
            if(k==i-1)
            {
                t3 = t->next;
                t4 = t3->next;
            }
            
            if(k==j-1)
            {
                t5 = t2->next;
                t6 = t5->next;
                t->next = t5;
                t5->next = t4;
                t2->next = t3;
                t3->next = t6;
                break;
            }
            
            if(k<i-1)
            {
                t = t->next;
                t2 = t2->next;
            }
            
            if(k<j-1 && k>=i-1)
            {
                t2 = t2->next;
            }
            k++;
        }
        return head;
    }
    return head;
}

