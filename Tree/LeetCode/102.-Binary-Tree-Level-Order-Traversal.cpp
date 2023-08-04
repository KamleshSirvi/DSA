/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root == NULL){
            return v;
        }
        
        // creating a queue
        queue<TreeNode*> q;

        // creating a secondary vector
        vector<int> v2;

        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();

            if(curr == NULL){
                v.push_back(v2);
                v2.resize(0);
                if(q.size() > 0){
                    q.push(NULL);
                }
                
            }else{
                v2.push_back(curr->val);
                if(curr->left != NULL){
                    q.push(curr->left);
                }
                if(curr->right != NULL){
                    q.push(curr->right);
                }
            }
        }
        return v;

    }
};
