//Given a Binary Tree, convert it into its mirror.
//Input: root[] = 1 3 2, Output: 3 1 2

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
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        if(node==NULL)
        return;
        queue<Node*>q;
        q.push(node);
        while(q.empty()==false){
            Node* curr=q.front();
            q.pop();
            
            Node* temp=curr->left;
            curr->left=curr->right;
            curr->right=temp;
            if(curr->right!=NULL)
            q.push(curr->right);
            if(curr->left!=NULL)
            q.push(curr->left);
        }
        
    }
};