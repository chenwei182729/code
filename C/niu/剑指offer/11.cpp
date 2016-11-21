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
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
		ListNode *tmp,*rHead ;
        rHead = pHead ;
        rHead -> next = NULL ;
        while(pHead->next != NULL){
            tmp = pHead->next ;
            tmp->next = rHead ;
            rHead = tmp;
            pHead = pHead->next;
        }      
        return rHead;
    }
    ListNode* CreateList(ListNode* pHead) {
		ListNode *tmp,*r;
		r = pHead;
		for(int i = 0 ; i < 10 ; ++i){
			tmp = (ListNode *) malloc(sizeof(ListNode *)) ;
			tmp->val = i ;
			tmp->next = NULL;
			r->next = tmp;
			r=r->next;
			cout << "HeadWorld\n" << endl;
		} 
    }
    void Display(ListNode *pHead){
    	while(pHead->next != NULL){
			cout << pHead->val <<" ";
			pHead = pHead->next; 
		} 
	}
};
int main()
{
	Solution s;
	ListNode *pHead;
	s.CreateList(pHead);
	s.Display(pHead);
	return 0;
}
