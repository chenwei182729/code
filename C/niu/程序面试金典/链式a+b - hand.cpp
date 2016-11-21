#include<iostream>
using namespace std;
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Plus {
public:
    ListNode* plusAB(ListNode* a, ListNode* b) {
        // write code here
        if(a == nullptr) return b;
        if(b == nullptr) return a;
        if(a==nullptr && b== nullptr) return nullptr;
        
        ListNode *aa = new ListNode(0),*atail;
        ListNode *bb = new ListNode(0),*btail;
        aa->next = a;atail = aa;
        bb->next = b;btail = bb;
        
        ListNode *pa = a,*pb = b;
        int tmp = 0;
        while(pa!=nullptr&&pb!=nullptr){            
            pa->val = pb->val + pa->val+tmp;
            tmp = (pa->val)/10;
            pb->val = pa->val = pa->val % 10;
            
            
            pa=pa->next;
            pb=pb->next;
            
            atail = atail->next;
            btail = btail->next;
        }
        bool usea = false;
		while(pa!=nullptr){
            pa->val = (pa->val + tmp)%10;
            tmp = (pa->val + tmp)/10;
            pa = pa->next;
            atail = atail->next;
            usea = true;
        }
        while(pb!=nullptr){
            pb->val = (pb->val + tmp)%10;
            tmp = (pb->val + tmp)/10;
            pb = pb->next; 
            btail = btail->next;
            usea = false;
        }
        if(tmp > 0){
        	if(usea){
	            ListNode *l=new ListNode(tmp);
	           	atail->next = l;
	            return aa->next;
	        }else{
	            ListNode *l=new ListNode(tmp);
	           	btail->next = l;
	            return bb->next;
	        }
		}
        else
            return usea == true ? aa->next : bb->next;
    }
};
int main()
{
	Plus P;
	return 0;
}
