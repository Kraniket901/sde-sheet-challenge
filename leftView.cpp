vector<int> leftView(Node *root)
{
   queue<Node*> q; vector<int> ans; 
   if(root==NULL) return ans;
   q.push(root); q.push(NULL); ans.push_back(root->data);
   while(!q.empty()){
       Node* temp = q.front(); q.pop();
       if(temp == NULL){
           if(q.empty()) break;
           q.push(NULL); 
           ans.push_back(q.front()->data); //we have to add left most
           //Node so we have added node which is just after the Null.
       }
       else{
           if(temp->left) q.push(temp->left);
           if(temp->right) q.push(temp->right);
       }
   }
   return ans;
}