#include<bits/stdc++.h>
using namespace std;

// struct Node{
//     int data;
//     struct Node* left;
//     struct Node* right;
    
//     Node(int val){
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };

// void postorder(Node* node){
//     if(node == nullptr){
//         return;
//     }

//     postorder(node->left);
//     postorder(node->right);
//     cout << node->data << " ";
// }

// void preorder(Node* node){
//     if(node == nullptr){
//         return;
//     }

//     cout << node->data << " ";
//     postorder(node->left);
//     postorder(node->right);
// }

// void inorder(Node* node){
//     if(node == nullptr){
//         return;
//     }

//     postorder(node->left);
//     cout << node->data << " ";
//     postorder(node->right);
// }

// int main(){
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

//     postorder(root);    

//     return 0;
// }


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

Node* insert(Node* root , int val){
    //base case
    if(!root){
        Node* temp = new Node(val);
        return temp;
    }

    if(val < root->data){
        root->left = insert(root->left , val);
    }
    else{
        root->right = insert(root->right , val);

    }

    return root;
}

void inorder(Node* root){

    if(!root){
        return;
    }

    inorder(root->left);
    cout<<root->data << " ";
    inorder(root->right);
}

bool search(Node* root , int target){
    if(!root){
        return 0;
    }
    else if(root->data == target){
        return 1;
    }
    else if(root->data > target){
        return search(root->left , target);
    }
    else{
        return search(root->right , target);
    }
}


int main(){

    int arr[] = {6,3,17,5,11,18,2,7,9,19,13,25,27,16,21};
    Node* root = nullptr;

    for(int i=0;i<15;i++){
        root = insert(root,arr[i]);
    }

    cout << search(root , 11) << endl;
    //inorder(root);
}