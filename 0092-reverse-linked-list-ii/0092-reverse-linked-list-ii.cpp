/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
     
            ListNode* cur=head;
            
            ListNode* nextN;
            ListNode* start=head;
            int i=1;
            while(i<left){ 
                start=cur;
                cur=cur->next;
                i++;
            }
            ListNode* pre=NULL;
            ListNode* tail=cur;
            
            while(i>=left&&i<=right){
                    nextN=cur->next;
                    cur->next=pre;
                    pre=cur;
                    cur=nextN;
                    i++;
            }
            start->next=pre;
            tail->next=cur;
            if(left>1){
                return head;
            }
            else{
            return pre;  
            }
    }
};