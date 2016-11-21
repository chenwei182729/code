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
ListNode* ReverseList(ListNode* pHead) {
	ListNode *newHead,*tmp;
	newHead = NULL; 
	while(pHead != NULL){
		//从头到尾依次摘取结点 
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
//创建链表 
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
		tmp->val = 2 * i + isOdd;
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
ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
{
    ListNode *newHead = NULL ,*tmp ,*tail;
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
            tail = newHead->next ;
        }else{
            tail->next = tmp ;
            tail = tail->next ;
        }
    }
    //最多只剩一个不为空
    if(pHead1 != NULL)
        tail->next = pHead1 ;
    if(pHead2 != NULL)
        tail->next = pHead2 ;
    return newHead;
}
void Display(ListNode *pHead){
	while(pHead != NULL){
		cout << pHead->val <<" ";
		pHead = pHead->next ; 
	} 
}
int main()
{
	ListNode *pHead = NULL ;
	if(pHead==NULL)
		cout<<"Hello World"<<endl ;
	CreateList(pHead);
	Display(pHead);
	cout << "\nReverse -- > " << endl ;
	pHead = ReverseList(pHead);
//	ReverseList(pHead);
	cout << "\nReverse -- > " << endl ;
	Display(pHead);
	return 0;
}
