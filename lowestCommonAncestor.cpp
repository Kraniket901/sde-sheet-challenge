int lowestCommonAncestor(TreeNode<int> *root, int x, int y)

{

    if(root == NULL){

        return -1;

    }

 

    if(root->data == x || root->data == y){

        return root->data;

    }

 

    int leftans = lowestCommonAncestor(root->left,  x,  y);

    int rightans = lowestCommonAncestor(root->right,  x,  y);

    if(leftans != -1 && rightans!=-1)

       return root->data;

       else if(leftans != -1 && rightans==-1)

       return leftans;

       else if(leftans== -1 && rightans!=-1)

       return rightans;

       else

       return -1;

}