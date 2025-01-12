//Given a binary tree, determine if it is height-balanced. A binary tree is considered height-balanced if the absolute difference in heights of the left and right subtrees is at most 1 for every node in the tree.

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 

class Solution {
  public:
    // Function to check whether a binary tree is balanced or not.
    int checkHeight(Node* root){
        if(root==NULL)
        return 0;
        int lh=checkHeight(root->left);
        if(lh==-1)
        return -1;
        int rh=checkHeight(root->right);
        if(rh==-1)
        return -1;
        if(abs(lh-rh)>1)
        return -1;
        return max(lh,rh)+1;
    }
    bool isBalanced(Node* root) {
        // Code here
        return checkHeight(root)!=-1;
    }
};