#include<iostream>
using namespace std; 
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
    RandomListNode() :
            next(NULL), random(NULL) {
    }
};
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        CloneNodes( pHead );  
        ConnectSiblingNodes( pHead );  
        return ReconnectNodes( pHead ); 
    }
    void CloneNodes(RandomListNode* pHead)  
    {  
        RandomListNode* pNode = pHead;  
        while(pNode != NULL)  
        {  
            RandomListNode *pCloned = (RandomListNode *)malloc(sizeof(RandomListNode));  
            pCloned->label = pNode->label;  
            pCloned->next = pNode->next;  
            pCloned->random = NULL;  

            pNode->next = pCloned;         //将新复制的结点链接在原始结点的后面  
            pNode = pCloned->next;  
        }  
    } 
    void ConnectSiblingNodes(RandomListNode* pHead)  
    {  
        RandomListNode* pNode = pHead;  
        while(pNode != NULL)                 //遍历链表更新随机指针  
        {  
            RandomListNode *pCloned = pNode->next;  
            if(pNode->random != NULL)  
            {  
                pCloned->random = pNode->random->next;       //新复制结点的随机指针就是原始结点的随机指针指向的结点的下一个结点  
            }  
            pNode = pCloned->next;  
        }  
    }  
    RandomListNode* ReconnectNodes(RandomListNode* pHead)  
    {  
        RandomListNode* pNode = pHead;  
        RandomListNode* pClonedHead = NULL;  
        RandomListNode* pClonedNode = NULL;  
        if(pNode != NULL)  
        {  
            pClonedHead = pClonedNode = pNode->next;  
            pNode->next = pClonedNode->next;  
            pNode = pNode->next;  
        }  
        while(pNode != NULL)  
        {  
            pClonedNode->next = pNode->next;   //把偶数位置的结点链接起来就是复制出来的新链表  
            pClonedNode = pClonedNode->next;  
            pNode->next = pClonedNode->next;   //把奇数位置的结点链接起来就是原始链表  
            pNode = pNode->next;  
        }  
        return pClonedHead;  
    }  
};
int main()
{
	Solution Sol;
	return 0;
}
