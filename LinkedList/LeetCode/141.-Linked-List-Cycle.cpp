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
    bool hasCycle(ListNode *head) {

        ListNode* first = head;
        ListNode* second = head;
        int flag = 0;

        while(first != NULL && second != NULL && second->next != NULL){
            first = first->next;
            second = second->next->next;

            if(first == second){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            return true;
        }
        return false;
    }
};
