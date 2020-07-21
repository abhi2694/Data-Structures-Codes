
/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */
// Should set the nextRight for all nodes
void connect(Node *p){
   queue< Node * > qq;
   qq.push(p);
   while(!qq.empty()){
       int sz = qq.size();
       while(sz > 0){
           Node* node = qq.front();
           qq.pop();
           //cout<<"here "<<node->data<<" "<<qq.size()<<endl;
           if(sz > 1){
               node->nextRight = qq.front();
           }else{
               node->nextRight = NULL;
           }
           if(node->left != NULL)
           qq.push(node->left);
           if(node->right != NULL)
           qq.push(node->right);
           sz--;
       }
   }
}