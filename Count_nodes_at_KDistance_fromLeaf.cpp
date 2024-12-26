/*struct NodeGiven a binary tree with n nodes and a non-negative integer k, the task is to count the number of special nodes. A node is considered special if there exists at least one leaf in its subtree such that the distance between the node and leaf is exactly k.
{
	int data;
	Node *left, *right;
};*/

class Solution
{
    public:
    //Function to return count of nodes at a given distance from leaf nodes.
    unordered_set<Node*>st;
    void rec(Node* root, vector<Node*>&v,int k){
        if(root==NULL)
        return;
        v.push_back(root);
        if(root->left==NULL && root->right==NULL){
            if(v.size()-1>=k){
                st.insert(v[v.size()-1-k]);
            }
        }
        rec(root->left,v,k);
        rec(root->right,v,k);
        v.pop_back();
    }
    
    int printKDistantfromLeaf(Node* root, int k)
    {
    	//Add your code here. 
    	st.clear();
    	vector<Node*>v;
    	rec(root,v,k);
    	
    	return st.size();
    }
};