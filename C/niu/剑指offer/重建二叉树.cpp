#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    struct TreeNode * subTree(vector<int> pre, int preStart, int preEnd, vector<int> in, int inStart, int inEnd) {
        struct TreeNode * rootTree = (struct TreeNode *) malloc (sizeof(struct TreeNode));
        rootTree -> val = pre[preStart];
        rootTree -> left = NULL;
        rootTree -> right = NULL;

        if (preStart == preEnd && inStart == inEnd && pre[preStart] == in[inStart])
            return rootTree;

        int rootIndex = inStart;
        while (in[rootIndex] != pre[preStart])
            rootIndex ++;
        int newLength = rootIndex - inStart;
        if (newLength > 0)
            rootTree -> left = subTree(pre, preStart + 1, preStart + newLength, in, inStart, rootIndex - 1);
        if (inEnd - rootIndex > 0)
            rootTree -> right = subTree(pre, preStart + newLength + 1, preEnd, in, rootIndex + 1, inEnd);
        return rootTree;
    }
    struct TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> in) {
        int preLength = pre.size();
        int inLength = pre.size();
        if (preLength == 0 || inLength == 0)
            return NULL;
        return subTree(pre, 0, preLength - 1, in, 0, inLength - 1);
    }
}; 
int main(void)
{
	Solution Sol;
	return 0;
}

