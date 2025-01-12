//Given a binary tree, check if the tree can be folded or not. A tree can be folded if left and right subtrees of the tree are structure wise mirror image of each other. An empty tree is considered as foldable

/*struct node
{
    int data;
    struct node* left;
    struct node* right;
    
    node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

//Function to check whether a binary tree is foldable or not.
bool isMirror(Node* n1, Node* n2){
    if(n1==NULL &&n2==NULL)
    return true;
    if(n1==NULL || n2==NULL )
    return false;
    return isMirror(n1->left,n2->right)&& isMirror(n1->right,n2->left);
}
bool IsFoldable(Node* root)
{
    // Your code goes here
    if(root==NULL)
    return true;
    return isMirror(root->left,root->right);
    
}