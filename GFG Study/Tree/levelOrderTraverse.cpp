#include <iostream>
#include <queue>
using namespace std;

// creating a Node
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

void levelOrder(Node* root){
    vector<int> v;

    if(root == NULL){
        return ;
    }
    // creating a queue
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        Node* curr = q.front();
        cout << curr->key << " " << endl;
        v.push_back(curr->key);
        
        q.pop();

        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}
int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->right = new Node(50);
    root->right->left = new Node(40);
    root->right->left->right = new Node(60);
    root->right->left->left = new Node(70);

    levelOrder(root);
    return 0;
}