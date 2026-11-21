#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// // void postorder(Node* node){
// //     if(node == nullptr){
// //         return;
// //     }

// //     postorder(node->left);
// //     postorder(node->right);
// //     cout << node->data << " ";
// // }

// // void preorder(Node* node){
// //     if(node == nullptr){
// //         return;
// //     }

// //     cout << node->data << " ";
// //     postorder(node->left);
// //     postorder(node->right);
// // }

// // void inorder(Node* node){
// //     if(node == nullptr){
// //         return;
// //     }

// //     postorder(node->left);
// //     cout << node->data << " ";
// //     postorder(node->right);
// // }

// // int main(){
// //     struct Node* root = new Node(1);
// //     root->left = new Node(2);
// //     root->right = new Node(3);
// //     root->left->left = new Node(4);
// //     root->left->right = new Node(5);
// //     root->left->right->left = new Node(6);
// //     root->right->left = new Node(7);
// //     root->right->right = new Node(8);
// //     root->right->right->left = new Node(9);
// //     root->right->right->right = new Node(10);

// //     postorder(root);    

// //     return 0;
// // }


// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         left = right = nullptr;
//     }
// };

// Node* insert(Node* root , int val){
//     //base case
//     if(!root){
//         Node* temp = new Node(val);
//         return temp;
//     }

//     if(val < root->data){
//         root->left = insert(root->left , val);
//     }
//     else{
//         root->right = insert(root->right , val);

//     }

//     return root;
// }

// void inorder(Node* root){

//     if(!root){
//         return;
//     }

//     inorder(root->left);
//     cout<<root->data << " ";
//     inorder(root->right);
// }

// bool search(Node* root , int target){
//     if(!root){
//         return 0;
//     }
//     else if(root->data == target){
//         return 1;
//     }
//     else if(root->data > target){
//         return search(root->left , target);
//     }
//     else{
//         return search(root->right , target);
//     }
// }


// int main(){

//     queue<Node*> q;

//     struct Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->left->right->left = new Node(6);
//     root->right->left = new Node(7);
//     root->right->right = new Node(8);
//     root->right->right->left = new Node(9);
//     root->right->right->right = new Node(10);

//     struct Node* temp = root;
//     q.push(temp);
//     while(!q.empty()){

//         int n = q.size();

//         for(int i=0;i<n;i++){
//             cout << (q.front())->data << " ";    
//             temp = q.front();
//             if(temp->left != nullptr){
//                 q.push(temp->left);
//             }
//             if(temp->right != nullptr){
//                 q.push(temp->right);
//             }
//             q.pop();
//         }

//         cout << endl;

//     }

// }


//iterative preorder
// int main(){

//     stack<Node*> s;

//     struct Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->left->right->left = new Node(6);
//     root->right->left = new Node(7);
//     root->right->right = new Node(8);
//     root->right->right->left = new Node(9);
//     root->right->right->right = new Node(10);

//     struct Node* temp = root;

//     if(root == nullptr) return 0;

//     s.push(temp);
//     while(!s.empty()){

//         int n = s.size();

//         for(int i=0;i<n;i++){
//             cout << (s.top())->data << " ";    
//             temp = s.top();
//             s.pop();
//             if(temp->right != nullptr){
//                 s.push(temp->right);
//             }
//             if(temp->left != nullptr){
//                 s.push(temp->left);
//             }
//         }

//         cout << endl;

//     }

// }

//iterative postorder

// int main(){

//     stack<Node*> s;

//     struct Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->left->right->left = new Node(6);
//     root->right->left = new Node(7);
//     root->right->right = new Node(8);
//     root->right->right->left = new Node(9);
//     root->right->right->right = new Node(10);

//     struct Node* temp = root;

//     if(root == nullptr) return 0;

//     s.push(temp);
//     while(!s.empty()){

//         int n = s.size();

//         for(int i=0;i<n;i++){
//             cout << (s.top())->data << " ";    
//             temp = s.top();
//             s.pop();
            
//             if(temp->left != nullptr){
//                 s.push(temp->left);
//             }
//             if(temp->right != nullptr){
//                 s.push(temp->right);
//             }
//         }

//     }

// }

