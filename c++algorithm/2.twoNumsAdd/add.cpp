/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result = new ListNode(0);
        ListNode *curr=result;
     
        ListNode *p=l1,*q=l2;

        int carry=0;
        while(p!=NULL || q!=NULL)
        {
            int x=(p==NULL)?0:p->val;
            int y=(q==NULL)?0:q->val;
            
            int sum=carry+x+y;
            carry=sum/10;     //是否进位
            
            curr->next = new ListNode(sum%10);
            
            curr=curr->next;
            if(p != NULL) p=p->next;
            if(q != NULL) q=q->next;
        }
        
        if (carry>0)
            curr->next = new ListNode(carry);
        
        return result->next;
        
        
        
    }
};




/*
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        bool UpFlag = false;
        ListNode *Ret = NULL;
        int TempResult = 0;

        TempResult = l1->val + l2->val;

        if (TempResult >= 10){
            UpFlag = true;
            Ret = new ListNode(TempResult - 10);
        }
        else{
            UpFlag = false;
            Ret = new ListNode(TempResult);
        }

        ListNode *pTemp = Ret;
        l1 = l1->next;
        l2 = l2->next;

        while((l1 != NULL) && (l2 != NULL)){
            if (UpFlag){
                TempResult = l1->val + l2->val + 1;
            }
            else{
                TempResult = l1->val + l2->val;
            }

            if (TempResult >= 10){
                pTemp->next = new ListNode(TempResult - 10);
                UpFlag = true;
            }
            else{
                pTemp->next = new ListNode(TempResult);
                UpFlag = false;
            }

            l1 = l1->next;
            l2 = l2->next;
            pTemp = pTemp->next;
        }

        ListNode *l3 = l1;
        if (l3 == NULL){
            l3 = l2;
        }

        while(l3 != NULL){
            if (UpFlag){
                TempResult = l3->val + 1;
            }
            else{
                TempResult = l3->val;
            }

            if (TempResult >= 10){
                pTemp->next = new ListNode(TempResult - 10);
                UpFlag = true;
            }
            else{
                pTemp->next = new ListNode(TempResult);
                UpFlag = false;
            }

            l3 = l3->next;
            pTemp = pTemp->next;
        }

        if (UpFlag){
            pTemp->next = new ListNode(1);
        }

        return Ret;
    }
};

*/







