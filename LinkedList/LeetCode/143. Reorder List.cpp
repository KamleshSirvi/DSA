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
    void reorderList(ListNode* head) {
        stack <ListNode* > st;

        ListNode* curr = head;
        int count = 0;
        while(curr != NULL){
            st.push(curr);
            curr = curr->next;
            count++;
        }
        
        ListNode* first = head;

        for(int i = 1; i <= count; i++){
            if(head->next == NULL){
                continue;
            }
            cout << "count : " << i << endl;
            if(i % 2 == 0){
                first = first->next;
            }else if(i % 2 != 0){
                ListNode* el = first->next;
                ListNode* temp = st.top();
                first->next = temp;
                temp->next = el;
                st.pop();
                el = first;
                first = first->next;
                if(i == count){
                    first = first->next;
                }
            }
            if(i == count ){
                first->next = NULL;
            }
        }
    }
};
