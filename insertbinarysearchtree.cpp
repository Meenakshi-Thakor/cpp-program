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
};
int main(){
    BinarySearchTree tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    cout << "In-order traversal after insertions ";
    tree.inOrderTraversal(tree.root);
    return 0;
}