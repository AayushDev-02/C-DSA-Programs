bool isBST(Node* root, int min , int max){
        if(root == NULL){
            return true;
        }
        
        if(root->data > min && root->data < max){
            bool left = isBST(root->left, min, root->data);
            bool right = isBST(root->right, root->data, max);
            
            return left && right;
        }
        else{
            return false;
        }
        
    }
    
    bool isBST(Node* root) 
    {
        return isBST(root, INT_MIN, INT_MAX);
    }