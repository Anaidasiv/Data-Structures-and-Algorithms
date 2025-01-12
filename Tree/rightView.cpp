//Given a Binary Tree, Your task is to return the values visible from Right view of it.
//Right view of a Binary Tree is set of nodes visible when tree is viewed from right side.
//Input: root = [1, 2, 3, 4, 5],Output: [1, 3, 5]

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        if(root==NULL)
        return res;
        queue<TreeNode*>q;
        q.push(root);
        while(q.empty()==false){
            int count=q.size();
            for(int i=0;i<count;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(i==count-1)
                    res.push_back(curr->val);
                if(curr->left!=NULL)
                q.push(curr->left);
                if(curr->right!=NULL)
                q.push(curr->right);
                
            }
        }
        return res;
    }
};