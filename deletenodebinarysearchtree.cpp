#include <iostream>
using namespace std;
class TreeNode {
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value): data(value), left(nullptr), right(nullptr){}
};
class BinarySearchTree {
    public:
    TreeNode* root;
    BinarySearchTree(): root(nullptr){}
    void insert(int value){
        root = insertRecursive(root, value);
    }
    TreeNode* insertRecursive(TreeNode* current,int value){
        if (current == nullptr){
            return new TreeNode(value);
        }
        if (value < current->data){
            current->left = insertRecursive(current->left, value);
        }
        else if (value > current->data){
            current->right = insertRecursive(current->right, value);
        }
        return current;
    }
    void inOrderTraversal(TreeNode* node){
        if (node == nullptr){
            return;
        }
        inOrderTraversal(node->left);
    cout << node->data << " ";
    inOrderTraversal(node->right);
}
TreeNode* deleteNode(TreeNode* root, int key){
    if (root == nullptr){
        return root;
    }
    if (key < root->data){
        root->left = deleteNode(root->left, key);
    }
    else if(key > root->data){
        root->right = deleteNode(root->right, key);
    }else{
        if (root->left == nullptr){
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }else if (root->right == nullptr){
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        TreeNode* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }       
    return root;
    }
    TreeNode* minValueNode(TreeNode* node){
        TreeNode* current = node;
        while (current->left != nullptr){
            current = current->left;
        }
        return current;
    }
};
int main(){
    BinarySearchTree tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    cout << "In-order traversal before deletion ";
    tree.inOrderTraversal(tree.root);
    cout << endl;
    return 0;
}