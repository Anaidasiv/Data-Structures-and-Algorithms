struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int>ans;
    	if(root==NULL){
    	return ans;}
    	queue<Node*>q;
    	q.push(root);
    	int level=1;
    	while(q.size()>0){
    	    int s=q.size();
    	    vector<int>temp;
    	    while(s>0){
    	        Node* curr=q.front();
    	        q.pop();
    	        s--;
    	        temp.push_back(curr->data);
    	        if(curr->left!=NULL)
    	        q.push(curr->left);
    	        if(curr->right!=NULL)
    	        q.push(curr->right);
    	    }
    	    if(level%2==0){
    	        reverse(temp.begin(),temp.end());
    	    }
    	   for(int i=0;i<temp.size();i++){
    	       ans.push_back(temp[i]);
    	   }
    	    level++;
    	        
    	        
    	    
    	}
    	
    	
    }
};