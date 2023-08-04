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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        if(head->next == NULL){
            return head;
        }
        ListNode* first = head;
        ListNode* second = head->next;
        
        while(first != NULL || first->next != NULL){
            swap(first->val, second->val);
            if(second->next == NULL || second->next->next == NULL){
                break;
            }else{
                first = first->next->next;
                second = second->next->next;
            }
            
        }
        return head;
    }
};
