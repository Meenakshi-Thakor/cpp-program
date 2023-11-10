#include <iostream>
using namespace std;
class AvLNode{
    public:
    int data;
    int height;
    AvLNode* left;
    AvLNode* right;
    AvLNode(int valvue) : data(valvue), height(1), left(nullptr), right(nullptr){}
};
class AVLTree{
    public:
    AvLNode* root;
    AVLTree() : root(nullptr){}
    
        int getHeight(AvLNode* node){
            return (node != nullptr) ? node->height : 0;
        }
        int getBalanceFactor(AvLNode*node){
            if (node == nullptr){
                return 0;
            }
            return getHeight(node->left) - getHeight(node->right);
        }
        AvLNode* rotateRight(AvLNode* y){
            AvLNode* x = y->left;
        AvLNode* T2 = x->right;
            x->right = y;
            y->left = T2;
            y->height = 1 + max(getHeight(y->left), getHeight(y->right));
            x->height = 1 + max(getHeight(x->left), getHeight(x->right));
            return x;
        }
        AvLNode* rotateleft(AvLNode* x){
            AvLNode* y = x->right;
            AvLNode* T2 = y->left;
            y->left = x;
            x->right = T2;
            x->height = 1 + max(getHeight(x->left), getHeight(x->right));
            y->height = 1 + max(getHeight(y->left), getHeight(y->right));
            return y;
        }
        AvLNode* insert(AvLNode* node,int value){
            if (node == nullptr)
            {
                return new AvLNode(value);
            }
            if (value < node->data){
                node->left = insert(node->left, value);
            }
            else if(value > node->data){
                node->right = insert(node->right,value);
            }
            else{
                return node;
            }
            node->height = 1 + max(getHeight(node->left), getHeight(node->right));
            int balance = getBalanceFactor(node);
            if (balance > 1 && value < node->left->data){
                return rotateRight(node);
            }
            if (balance < -1 && value > node->right->data){
                return rotateleft(node);
            }
            if (balance > 1 && value > node->left->data){
                node->left = rotateRight(node);
            }
            if (balance < -1 && value < node->right->data){
                node->right = rotateRight(node->right);
                return rotateleft(node);
            }
            return node;

            }
            void insert(int value){
                root = insert(root,value);
            }
            void inOrderTraversal(AvLNode* node){
                if (node == nullptr){
                    return;
                inOrderTraversal(node->left);
                cout << node->data << " ";
                inOrderTraversal(node->right);
            }}
            int main()
            {
                AVLTree avl;
                avl.insert(50);
                avl.insert(30);
                avl.insert(70);
                avl.insert(20);
                avl.insert(40);
                avl.insert(60);
                avl.insert(80);
                cout << "IN-order traversal after insertion ";
                avl.inOrderTraversal(avl.root);
                cout << endl;
                return 0;
            }
  };
        
    
