#include <iostream>
using namespace std;
class TreeNode {
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value): data(value), left(nullptr), right(nullptr){}
};
class BinarySearchTree{
    public:
    TreeNode* root;
    BinarySearchTree(): root(nullptr){}
    void insert(int value){
        root = insertRecursive(root,value);
    }
    TreeNode* insertRecursive(TreeNode* current,int value){
if (current == nullptr){
    return new TreeNode(value);
}
if (value < current->data){
    current->left = insertRecursive(current->left,value);
}
else if (value > current->data){
    current->right = insertRecursive(current->right,value);
}
return current;
}
bool search(int key){
    return searchRecursive(root,key);
}
bool searchRecursive(TreeNode* current, int key){
    if (current == nullptr){
        return false;
    }
    if (key == current->data){
        return true;
    }
    else if (key < current->data){
        return searchRecursive(current->left,key);
    }
    else{
        return searchRecursive (current->right,key);
    }
}
};
int main(){
    BinarySearchTree tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    int keyToSearch = 30;
    if (tree.search(keyToSearch)){
        cout <<  keyToSearch << "found in the binary search tree " << endl;
    }else{
        cout << keyToSearch << "not found in the binary search tree " <<endl;
    }
    return 0;
}