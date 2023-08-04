#include <iostream>
#include <queue>
using namespace std;

// Creating a node
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL; 
    }
    
};
// Build a tree
node* buildTree(node* root){
    cout << "Enter the data : " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "inserting the data at left of root node : " << data << endl;
    root->left = buildTree(root->left);
    cout << "insering the data at right of root node : " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

// level order traversal
node* levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        cout << temp->data << "  " << endl;
        q.pop();

        if(temp -> left != NULL){
            q.push(temp->left);
        }

        if(temp->right != NULL){
            q.push(temp->right);
        }
    }
}
int main(){
    node* root = NULL;

    root = buildTree(root);

    levelOrderTraversal(root);
    return 0;
}