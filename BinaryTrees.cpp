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

Node* insert(Node* root , int k){
    queue<Node*> q;
    struct Node* temp = root;
    q.push(temp);
    struct Node* addn = new Node(k);

    if(root == nullptr){
        temp = addn;
        return temp;
    }

    while(!q.empty()){
        temp = q.front();
        q.pop();

        if(temp->left!=nullptr){
            q.push(temp->left);
        }
        else{
            temp->left = addn;
            return addn;
        }
        if(temp->right!=nullptr){
            q.push(temp->right);
        }
        else{
            temp->right = addn;
            return addn;
        }
    }

    return addn;
}

Node* update(Node* root , int j , int k){
    queue<Node*> q;
    struct Node* temp = root;
    q.push(temp);

    if(root == nullptr){
        return root;
    }

    while(!q.empty()){
        temp = q.front();
        q.pop();

        if(temp->left->data!=j){
            q.push(temp->left);
        }
        else{
            temp->left->data = k;
            return root;
        }
        if(temp->right->data!=j){
            q.push(temp->right);
        }
        else{
            temp->right->data = k;
            return root;
        }
    }

    return root;
}


void levelorder(Node* root){

    Node* temp = root;
    queue<Node*> q;

    if(root == nullptr) return;

    q.push(temp);
    while(!q.empty()){

        cout << (q.front())->data << " ";    
        temp = q.front();
        if(temp->left != nullptr){
            q.push(temp->left);
        }
        if(temp->right != nullptr){
            q.push(temp->right);
        }
        q.pop();

    }
}


int main(){

    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    cout << insert(root , 6) << endl;
    cout << update(root , 5 , 7) << endl;
    levelorder(root);
}


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

// iterative inorder

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
//     while(!s.empty() && (s.top()->right != nullptr)){

               
//             temp = s.top();

//             // s.pop();
            
//             if(temp->left != nullptr){
//                 s.push(temp->left);
//             }

            // cout << (s.top())->data << " "; 

            // if(temp->right != nullptr){
            //     s.push(temp->right);
            // }
//     }

// }