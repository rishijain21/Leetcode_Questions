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
    
    private :
    int getCount(ListNode* head)
{
    // Initialize count
    int count = 0;
 
    // Initialize current
    ListNode* current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
public:
    int getDecimalValue(ListNode* head) {
        
        
        
        int ans =0;
        int n = getCount(head);
        
        
            for(int i=n;i> 0;i--){
          ListNode* current = head;
                
            int value = current -> val;
             
                //cout<<pow(2,i-1)<<endl;
               // cout<<value<<endl;
      int ex = (pow(2,i-1));
                
                ans = ans + value*ex;
                
          head = head ->next;
          
            }
       return ans;
        
     
    }
};