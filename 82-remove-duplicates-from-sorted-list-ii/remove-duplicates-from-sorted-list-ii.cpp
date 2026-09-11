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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0);
          dummy->next = head;
         ListNode* prev = dummy;
         ListNode* temp1 = head;
         while(temp1!=nullptr){
           ListNode*temp2=temp1->next;
           while(temp2!=nullptr &&temp1->val == temp2->val){
              temp2=temp2->next;
           }
              if(temp1->next==temp2){
                //no duplicate
                prev =temp1;
                temp1=temp1->next;
              }
              else{
              prev->next=temp2;
              temp1= temp2;
              }

           }
         
         return dummy->next;
             
         }
    
    
};