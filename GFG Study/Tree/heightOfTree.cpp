#include <iostream>
using namespace std;

// creating nodes
struct Node
{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

// find height
int Height(Node* root){
    if(root == NULL){
        return 0;
    }

    int height = max(Height(root->left), Height(root->right)) + 1;
    return height;
}
int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->right = new Node(50);
    root->right->left = new Node(40);
    root->right->left->right = new Node(60);
    root->right->left->left = new Node(70);

    cout << "height of Tree : " << Height(root) << endl;
    return 0;
}