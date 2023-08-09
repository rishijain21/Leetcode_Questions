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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* curr = head;
        ListNode * temp = head;
        
        int len =0;
        
        while(temp!=NULL){
            
            len++;
            temp = temp->next;
        }
        ListNode* prev = NULL;
        ListNode* forword = NULL;
        
        
        int value = len-n+1;
        
       if(value==1)
        {
           return head->next; 
        }

        int cnt =0;
        
        while(curr!=NULL && curr->next!=NULL){
            
           
           forword = curr->next;
           prev = curr;
            curr = curr->next;
            cnt++;
            
            if(cnt+1==value){ 
                prev->next = curr->next;
            }
        }
        
        return head;
        
        
        
    }
};