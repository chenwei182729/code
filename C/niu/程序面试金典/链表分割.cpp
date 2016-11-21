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
        // write code here
        if(pHead == NULL) return pHead;
        ListNode *p,*tmp,*tail,*currentNode;
        p=pHead;tail=pHead;tmp=pHead->next;
        p->next = NULL;
        tail->next = NULL;
        
        if(p->val >= x){
            
        } 
        while(tmp!=NULL){
            currentNode = tmp;
            tmp = tmp->next;
            if(currentNode->val < x){
                currentNode->next = p->next;
                p->next = currentNode;
                p = currentNode;
            }else{
                currentNode->next = NULL;
                tail->next = currentNode;
                tail = currentNode;
            }
        }
        return pHead;
    }
};
int main()
{
	Partition Par;
	
	return 0;
}
