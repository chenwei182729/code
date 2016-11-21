class Solution {
public:
    void Mirror(TreeNode *pRoot) {
		if(pRoot == NULL) return ;
        else if(pRoot->left == NULL && pRoot->right == NULL){
            return;
        }
        
        TreeNode *pTemp = pRoot->left ;
        pRoot->left = pRoot->right;
        pRoot->right = pTemp;
        if(pRoot->left)  
        	Mirror(pRoot->left);  
    	if(pRoot->right)  
        	Mirror(pRoot->right);  
    }
};
