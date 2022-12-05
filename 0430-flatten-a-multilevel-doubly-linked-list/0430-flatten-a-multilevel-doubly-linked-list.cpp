/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(!head) return head;
        
        Node* cur=head,*temp,*tail;
        while(cur!=NULL){
            
           if(cur->child==NULL){
               cur=cur->next;
           }
           else{
               temp=cur->next; 
               
               cur->next=cur->child;
               cur->next->prev=cur;
               cur->child=NULL;
               
               tail=cur->next;
               while(tail->next!=NULL){
                   tail=tail->next;
               }
               
               tail->next=temp;
               if(tail->next!=NULL){
               temp->prev=tail;
               }
              
               
            }
        }
        return head;
    }
};