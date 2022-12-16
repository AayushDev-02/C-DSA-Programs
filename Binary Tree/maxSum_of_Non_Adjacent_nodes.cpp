pair<int,int> solve(Node* root){
        
        if(root == NULL){
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        
        // left
        pair<int,int> left = solve(root->left);
        pair<int,int> right = solve(root->right);
        
        pair<int,int> ans;
        ans.first = left.second + right.second + root->data;
        ans.second = max(left.first , left.second) + max(right.first , right.second);
        
        return ans;
        
    }
  
  
  
  
    //Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) 
    {
        pair<int, int> ans;
        ans = solve(root);
        
        return max(ans.first, ans.second);
    }