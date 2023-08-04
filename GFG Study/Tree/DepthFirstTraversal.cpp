#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node* left;
    Node* right;

    Node(int k){
        key = k;
        left = NULL;
        right = NULL;
    }
};

// inorder traversal
void inOrder(Node* root){
    if(root == NULL){
        return ;
    }

    inOrder(root->left);
    cout << root->key << " " << endl;
    inOrder(root->right);
}

// preOrder traversal
void preOrder(Node* root){
    if(root == NULL){
        return ;
    }

    cout << root->key << endl;
    preOrder(root->left);
    preOrder(root->right);

}

// postOrder Trversal
void postOrder(Node* root){
    if(root == NULL){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->key << endl;

}

int main(){
    // create a tree
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->right = new Node(40);
    root->right->left = new Node(50);

    cout << "inOrder Traversal : " << endl;
    inOrder(root);

    cout << "preOrder Traversal : " << endl;
    preOrder(root);

    cout << "postOrder Traversal : " << endl;
    postOrder(root);

    return 0;
}