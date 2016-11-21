#include<iostream>
#include<vector> 
using namespace std;

/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode *root) {
        vector<int> vec_it;
		if(!root)
            return vec_it;
        std::deque<TreeNode *> dequeTreeNode;
        dequeTreeNode.push_back(root);
        
        while(dequeTreeNode.size()){
            TreeNode *pNode = dequeTreeNode.front();
            dequeTreeNode.pop_front();
           	vec_it.push_back(pNode->val);
            
            if(pNode->left)
                dequeTreeNode.push_back(pNode->left);
            if(pNode->right)
                dequeTreeNode.push_back(pNode->right);
        }
        return vec_it;
    }
};
int main()
{
	return 0;
}
