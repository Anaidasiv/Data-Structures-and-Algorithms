//Given a Binary Tree, find the maximum width of it. Maximum width is defined as the maximum number of nodes at any level.
//Input: root = [1, 2, 3], Output: 2

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
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {
        // Your code here
        int maxWidth=0;
        if(root==NULL)
        return 0;
        queue<Node*>q;
        q.push(root);
        while(q.empty()==false){
            int levelWidth=q.size();
            maxWidth=max(maxWidth,levelWidth);
            for(int i=0;i<levelWidth;i++){
                Node* curr=q.front();
                q.pop();
                if(curr->left!=NULL)
                q.push(curr->left);
                if(curr->right!=NULL)
                q.push(curr->right);
            }
        }
        return maxWidth;
    }
};