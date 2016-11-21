//���������������������ؽ������� 
#include <iostream>  
#include <stdio.h>  
#include <stdlib.h>  
  
using namespace std;  
  
struct BinaryTreeNode   
{  
    int m_nValue;  
    struct BinaryTreeNode *m_pLeft;  
    struct BinaryTreeNode *m_pRight;  
};  
  
BinaryTreeNode* Construct(int *preorder, int *inorder, int lenght);  
BinaryTreeNode* ConstructCore(int *startPreorder, int *endPreorder, int *startInorder, int *endInorder);  
  
//�������  
void Traverse( BinaryTreeNode * root)  
{  
    if (root == NULL)   
    {  
        return;  
    }  
    else  
    {  
        Traverse(root->m_pRight);  
        cout << root->m_nValue << " ";  
        Traverse(root->m_pLeft);  
    }  
}  
  
int main(int argc, char* argv[])  
{  
    int preOrder[] = {5, 4, 2, 1, 6, 3};  
    int inOrder[] = {2, 4, 1, 6, 5, 3};  
  
    BinaryTreeNode *head = Construct(preOrder, inOrder, sizeof(inOrder) / sizeof(inOrder[0]));  
    cout << "��������Ľ����" << endl;  
    Traverse(head);  
    cout << endl;  
  
    return 0;  
}  
  
BinaryTreeNode* Construct(int *preorder, int *inorder, int lenght)  
{  
    if (preorder == NULL || inorder == NULL || lenght <= 0)   
    {  
        return NULL;  
    }  
    return ConstructCore(preorder, preorder + lenght - 1, inorder, inorder + lenght - 1);  
}  
  
BinaryTreeNode* ConstructCore(int *startPreorder, int *endPreorder, int *startInorder, int *endInorder)  
{  
    int rootValue = startPreorder[0];  
    BinaryTreeNode *root = new BinaryTreeNode();  
    root->m_nValue = rootValue;  
    root->m_pLeft = root->m_pRight = NULL;  
  
    if (startPreorder == endPreorder)   
    {//��������Ѿ������ˣ������ʱ��һ���ǲ������һ���ڵ㣬��Ӧ�����������if��䣬�����������������  
        if (startInorder == endInorder && *startPreorder == *startInorder)   
        {  
            return root;  
        }  
        else  
        {  
            cout << "Invalid input" << endl;  
            exit(-1);  
        }  
    }  
  	//���Ҹ��ڵ� 
    int *rootInorder = startInorder;  
    while (rootInorder <= endInorder && *rootInorder != rootValue)   
    {  
        ++rootInorder;  
    }  
    if (rootInorder <= endInorder && *rootInorder != rootValue)   
    {  
        cout << "Invalid input" << endl;  
        exit(-1);  
    }  
  	//������ 
    int leftLength = rootInorder - startInorder;   
    int *leftPreorderEnd = startPreorder + leftLength;  
  
    if (leftLength > 0)   
    {  
    	//������ 
        root->m_pLeft = ConstructCore(startPreorder + 1, leftPreorderEnd, startInorder, rootInorder - 1);  
    }  
    if (leftLength < endPreorder - startPreorder)   
    {  
    	//������ 
        root->m_pRight = ConstructCore(leftPreorderEnd + 1, endPreorder, rootInorder + 1, endInorder);  
    }  
  
    return root;      
} 
