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
    bool isPalindrome(ListNode* head) {
        vector<int>v,s;
          while(head){
           v.push_back(head->val);
           head=head->next;
          }
         s=v;
        
        reverse(s.begin(),s.end());
        
        if(s==v) {
            return true;
        }
        else {
            return false;
        }
         
         
      
    }
};