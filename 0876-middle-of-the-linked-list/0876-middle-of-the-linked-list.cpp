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
    ListNode* middleNode(ListNode* head) {
         ListNode *low=head;
        ListNode *high=head;
        
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        while(high!=NULL&&high->next!=NULL)
        {
            low=low->next;
            high=high->next->next;
        }
        head=low;
        return head;
    } 
    
};