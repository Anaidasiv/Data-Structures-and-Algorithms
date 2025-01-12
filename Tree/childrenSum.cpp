//Given a binary tree having n nodes. Check whether all of its nodes have a value equal to the sum of their child nodes. Return 1 if all the nodes in the tree satisfy the given properties, else it returns 0. For every node, the data value must be equal to the sum of the data values in the left and right children. Consider the data value 0 for a NULL child. Also, leaves are considered to follow the property.

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){80
        data = x;
        left = right = NULL;
    }
};


class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node* root){
     if(root==NULL)
     return 1;
     queue<Node*> q;
     q.push(root);
     while(q.empty()==false){
         Node* curr=q.front();
         q.pop();
         
         if(curr->left!=NULL)
         q.push(curr->left);
         if(curr->right!=NULL)
         q.push(curr->right);
         int l=(curr->left!=NULL)?curr->left->data:0;
         int r=(curr->right!=NULL)?curr->right->data:0;
        
          if(curr->left!=NULL || curr->right!=NULL){
             if(curr->data!=l+r)
             return 0;
         }
     }
         return 1;
     
    }
};