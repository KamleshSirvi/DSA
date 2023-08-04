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
        if(right - left == 0){
            return head;
        }
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        stack<int> st;

        ListNode* first = head;
        int i = 1;
        while(i < left){
            first = first -> next;
            i++;
        }
        ListNode* curr = first;
        for(int j = 0; j <= right-left; j++){
            st.push(curr->val);
            curr = curr->next;
        }
        
        while(!st.empty()){
            int temp = st.top();
            first -> val = temp;
            first = first->next;
            st.pop();
        }
        return head;
    }
};
