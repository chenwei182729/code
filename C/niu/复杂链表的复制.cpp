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

            pNode->next = pCloned;         //���¸��ƵĽ��������ԭʼ���ĺ���  
            pNode = pCloned->next;  
        }  
    } 
    void ConnectSiblingNodes(RandomListNode* pHead)  
    {  
        RandomListNode* pNode = pHead;  
        while(pNode != NULL)                 //��������������ָ��  
        {  
            RandomListNode *pCloned = pNode->next;  
            if(pNode->random != NULL)  
            {  
                pCloned->random = pNode->random->next;       //�¸��ƽ������ָ�����ԭʼ�������ָ��ָ��Ľ�����һ�����  
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
            pClonedNode->next = pNode->next;   //��ż��λ�õĽ�������������Ǹ��Ƴ�����������  
            pClonedNode = pClonedNode->next;  
            pNode->next = pClonedNode->next;   //������λ�õĽ��������������ԭʼ����  
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
