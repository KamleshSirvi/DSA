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
    ListNode* oddEvenList(ListNode* head) {
        // idea is that 
        // two poimter approach
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;
        
        
        while(even != NULL && even->next != NULL){
          // odd element ki linked list alag bana  rahe hai
            odd->next = odd->next->next;
          // even element ki linked list alag bana rahe hai
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
      // phir dono ko merge kr rhe hai
        odd->next = evenHead;
        return head;

    }
};
