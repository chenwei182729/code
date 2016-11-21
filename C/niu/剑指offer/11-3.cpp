#include<iostream>
#include<cstdlib> 
using namespace std; 

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};

//�������� 
ListNode* CreateList(ListNode* &pHead) {
	ListNode *tmp;
	for(int i = 0 ; i < 10 ; ++i){
		tmp = (ListNode *) malloc(sizeof(ListNode)) ;
		tmp->val = i ;
		tmp->next = NULL ;
		if(pHead == NULL)
		{
			pHead = tmp ;
		}
		else
		{
			tmp->next = pHead;
			pHead = tmp ;
		} 
	} 
}
ListNode* CreateList(ListNode* &pHead,int isOdd) {
	ListNode *tmp;
	for(int i = 0 ; i < 10 ; ++i){
		tmp = (ListNode *) malloc(sizeof(ListNode)) ;
		tmp->val = 2 * (10 - i) + isOdd;
		tmp->next = NULL ;
		if(pHead == NULL)
		{
			pHead = tmp ;
		}
		else
		{
			tmp->next = pHead;
			pHead = tmp ;
		} 
	} 
}
//�ϲ��������� 
ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
{
    ListNode *newHead = NULL ,*tmp ,*tail;
    if(pHead1 == NULL && pHead2 == NULL) return NULL;
    else if(pHead1 == NULL && pHead2 != NULL) return pHead2;
    else if(pHead1 != NULL && pHead2 == NULL) return pHead1;
	 
    while(pHead1 != NULL && pHead2 != NULL){
        if(pHead1->val > pHead2->val){
            tmp = pHead2 ;
            pHead2 = pHead2->next ;
        }else{
            tmp = pHead1 ;
            pHead1 = pHead1->next ;
        }
        
        tmp->next = NULL;
        
        if(newHead == NULL){
            newHead = tmp ;
            newHead->next = NULL;
            tail = newHead ;
        }else{
            tail->next = tmp ;
            tail = tail->next ;
        }
    }
    //���ֻʣһ����Ϊ��
    if(pHead1 != NULL)
        tail->next = pHead1 ;
    if(pHead2 != NULL)
        tail->next = pHead2 ;
    return newHead;
}
//����һ����������������е�����k����㡣
ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) 
{
	ListNode *tmp=pListHead;
	unsigned int idx = 0 ;
	while(pListHead != NULL){   
	    if(idx < k ){
	        ++idx ;
	    }else{
	    //	cout << tmp->val << " " << pListHead->val << endl;
	    	tmp=tmp->next;
		}
		pListHead = pListHead->next;
	}
	if(idx < k ){
	    return NULL;
}
return tmp;
} 
//����һ��������ת�����������������Ԫ�ء�
ListNode* ReverseList(ListNode* pHead) {
	ListNode *newHead,*tmp;
	newHead = NULL; 
	while(pHead != NULL){
		//��ͷ��β����ժȡ��� 
		tmp = pHead ;
		pHead = pHead->next;
		if(newHead == NULL)
		{
			newHead = tmp ;
			newHead->next = NULL ;
		}
		else
		{
			tmp->next = newHead ;
			newHead = tmp ;
		}
	}    
    return newHead ;
}
void Display(ListNode *pHead){
	while(pHead != NULL){
		cout << pHead->val <<" ";
		pHead = pHead->next ; 
	} 
}
int main()
{
	ListNode *pHead1 = NULL, *pHead2 = NULL ;
	CreateList(pHead1,0);
	 
	CreateList(pHead2,1);
	cout << "\Head1 -- > " << endl ;
	Display(pHead1);
	cout << endl;
	
	cout << "\nHead2 -- > " << endl ;
	Display(pHead2);
	ListNode *pHead ;
	
	pHead = Merge(pHead1,pHead2);
	cout << "\npHead -- > " << endl ;
	Display(pHead);
	
	cout << endl;
	ListNode *tmp = FindKthToTail(pHead,10);
	cout << tmp->val<<endl;

	return 0;
}
