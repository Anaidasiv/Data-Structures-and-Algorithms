//You are given the root of a binary tree. Your task is to return the left view of the binary tree. The left view of a binary tree is the set of nodes visible when the tree is viewed from the left side.
//If the tree is empty, return an empty list.
//i/p-root[] = [1, 2, 3, 4, 5, N, N], Output: [1, 2, 4]

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        vector<int>res;
        if(root==NULL)
        return res;
        queue<Node*>q;
        q.push(root);
        while(q.empty()==false){
            int count=q.size();
            for(int i=0;i<count;i++){
                Node* curr=q.front();
                q.pop();
                if(i==0)
                res.push_back(curr->data);
                if(curr->left!=NULL)
                q.push(curr->left);
                if(curr->right!=NULL)
                q.push(curr->right);
            }
        }
        return res;
    }
};