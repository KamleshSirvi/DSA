#include <iostream>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};
// print nodes

void printKdistance(Node* root, int K){
    if(root == NULL){
        return ;
    }
    if(K == 0){
        cout << root->key << endl;
    }
    printKdistance(root->left, K-1);
    printKdistance(root->right, K-1);
}
int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->right = new Node(50);
    root->right->left = new Node(40);
    root->right->left->right = new Node(60);
    root->right->left->left = new Node(70);

    printKdistance(root, 2);
    return 0;
}