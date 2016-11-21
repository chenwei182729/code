#include<iostream>
using namespace std;
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
    	if(pHead == nullptr) return pHead;
    	ListNode *pminNode = new ListNode();
    	ListNode *pmaxNode = new ListNode();
        ListNode *pmin,*pmax,*tmp;
		pmin = pminNode;
		pmax = pmaxNode;
		
		while(pHead != nullptr){
			tmp = pHead;
			pHead=pHead->next;
			tmp->next = nullptr;
			if(tmp->data >= x){
				pmax->next = tmp;
				pmax = pmax->next; 
			}
			else{ 
				pmin->next = tmp;
				pmin = pmin->next;
			} 
		}
		pmin->next = pmaxNode->next;
		free(pmaxNode);
		pmin=pminNode->next;
		free(pminNode);
		return pmin;
    }
};
int main()
{
	Partition Par;
	
	return 0;
}
