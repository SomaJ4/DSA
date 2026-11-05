#include<bits/stdc++.h>
using namespace std;

// //i have to convert an array into a linkedlist
// //for that i need to define a linkedlist first
// //that is and custom data structure using class or struct
// //then take an array

// //----------------------------------done--------------------------till-here-------------
// //---------------now-onto-is------------------
// //then make a function which converts arr2LL

class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};


// //we are creating a pointer function
// //i.e return type of this function is a pointer
// //this function will return a pointer
// //pointer to the head of the linkedlist

Node* arr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

// int search(Node* head, int a){
//     Node* temp = head;
//     while(temp){
//         if(temp->data == a) return 1;
//         temp = temp->next;
//     }
//     return 0;
// }

// int main(){
//     vector<int> arr = {2 , 5 , 8 , 7};
//     Node* head = arr2LL(arr);

//     // Node* temp = head; 
//     // while(temp){
//     //     cout << temp->data << " ";
//     //     temp = temp->next;
//     // }

//     // cout << lengthofLL(head);

//     int a;
//     cin >> a;
//     cout << search(head , a);
// }

//1. Delete Head Node
// int deleteheadnode(Node*& head){
//     //linkedlist ka pahila element is head basically
//     Node* temp = head;
//     head = head->next;
//     temp->next = nullptr;
//     delete temp;
//     return head->data;
// }

// int lengthofLL(Node* head){
//     int ct = 0;
//     Node* temp = head;
//     while(temp){
//         temp = temp->next;
//         ct++;
//     }
//     return ct;
// }

// int main(){
//     vector<int> arr = {2 , 5 , 8 , 7};
//     Node* head = arr2LL(arr);

//     // Node* temp = head; 
//     // while(temp){
//     //     cout << temp->data << " ";
//     //     temp = temp->next;
//     // }

//     // cout << lengthofLL(head);

//     cout << deleteheadnode(head) << endl;
//     cout << lengthofLL(head);
// }

//2. Delete Tail Node
// int deleteTailNode(Node* head){
//     //linkedlist ka pahila element is head basically

//     if(head == nullptr) return 0;

//     if(head->next == nullptr){
//         delete(head);
//         head = nullptr;
//         return 0;
//     }

//     Node* mover = head;
    
//     while(mover->next->next != nullptr){
//         mover = mover->next;
//     }

//     Node* tail = mover->next;
//     mover->next = nullptr;
//     delete(tail);

//     return head->data;
// }

// int lengthofLL(Node* head){
//     int ct = 0;
//     Node* temp = head;
//     while(temp){
//         temp = temp->next;
//         ct++;
//     }
//     return ct;
// }

// int main(){
//     vector<int> arr = {2 , 5 , 8 , 7};
//     Node* head = arr2LL(arr);

//     // Node* temp = head; 
//     // while(temp){
//     //     cout << temp->data << " ";
//     //     temp = temp->next;
//     // }

//     // cout << lengthofLL(head);

//     cout << deleteTailNode(head) << endl;
//     cout << lengthofLL(head);
// }

//3. Delete kth Nodde
// int deleteKthNode(Node* head , int n){
//     //linkedlist ka pahila element is head basically

//     // if(head == nullptr) return 0;

//     // if(head->next == nullptr){
//     //     delete(head);
//     //     head = nullptr;
//     //     return 0;
//     // }

//     if(n == 1){
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//         return head->data;
//     }



//     Node* mover = head;

//     if(mover == nullptr || mover->next == nullptr){
//         return head->data;
//     }

//     for(int i=1;i<n-1 && mover!=nullptr; i++){
//         mover = mover->next;
//     }  

//     Node* temp = mover->next;
//     mover->next = mover->next->next;
//     delete(temp);
   
//     return head->data;
// }

// int lengthofLL(Node* head){
//     int ct = 0;
//     Node* temp = head;
//     while(temp){
//         temp = temp->next;
//         ct++;
//     }
//     return ct;
// }

// int main(){
//     vector<int> arr = {2 , 5 , 8 , 7};
//     Node* head = arr2LL(arr);

//     // Node* temp = head; 
//     // while(temp){
//     //     cout << temp->data << " ";
//     //     temp = temp->next;
//     // }

//     // cout << lengthofLL(head);
//     int n;
//     cin >> n;
//     cout << deleteKthNode(head , n) << endl;
//     cout << lengthofLL(head);
// }


//4.Delete Node with Value X
// int deleteKthNode(Node* &head , int n){

//     Node* mover = head;

//     if(head->data == n){
//         head = head->next;
//         mover->next = nullptr;
//         delete mover;
//         return head->data;
//     }

//     while(mover->next !=nullptr && mover->next->data != n){
//         mover = mover->next;
//     }

//     // X not found
//     if(mover->next == nullptr) {
//         return head->data;
//     }

//     if(mover->next->data != n){
//         return 0;
//     }

//     Node* temp = mover->next;
//     mover->next = mover->next->next;
//     delete(temp);
   
//     return head->data;
// }

// int lengthofLL(Node* head){
//     int ct = 0;
//     Node* temp = head;
//     while(temp){
//         temp = temp->next;
//         ct++;
//     }
//     return ct;
// }

// int main(){
//     vector<int> arr = {2 , 5 , 8 , 7};
//     Node* head = arr2LL(arr);

//     // Node* temp = head; 
//     // while(temp){
//     //     cout << temp->data << " ";
//     //     temp = temp->next;
//     // }

//     // cout << lengthofLL(head);
//     int n;
//     cin >> n;
//     cout << deleteKthNode(head , n) << endl;
//     cout << lengthofLL(head);
// }

//5.Inset at Head

int insertAtHead(Node* &head , int n){

    Node* mover = head;

    if(head == nullptr){
        head->data = n;
        head->next = nullptr;
    }

    Node* temp = new Node(n);
    temp->next = mover;
    head = temp;
    
    return head->data;
}

int lengthofLL(Node* head){
    int ct = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        ct++;
    }
    return ct;
}

int main(){
    vector<int> arr = {2 , 5 , 8 , 7};
    Node* head = arr2LL(arr);

    // Node* temp = head; 
    // while(temp){
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }

    // cout << lengthofLL(head);
    //

    int n;
    cin >> n;

    cout << insertAtHead(head , n) << endl;
    cout << lengthofLL(head);
}