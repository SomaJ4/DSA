#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1 , Node* next1 , Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* arr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i] , nullptr , prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}

void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

// int main(){
//     vector<int> arr = {2 , 5 , 8 , 7};
//     Node* head = arr2DLL(arr);
//     print(head);
//     return 0;
// }

// int deleteHeadNode(Node* &head){
//     Node* temp = head;
//     head = temp->next;
//     temp->next->back = nullptr;
//     temp->next = nullptr;
//     delete(temp);
//     return head->data;
// }

//1.Deleting the Head
// int main(){
//     vector<int> arr = {2 , 5 , 8 , 7};
//     Node* head = arr2DLL(arr);
//     cout << deleteHeadNode(head) << endl;
//     print(head);
//     return 0;
// }

//---------------------------------//
//2.DeletingTheTailNode
// int deleteTailNode(Node* &head){

//     Node* temp = head;

//     while(temp->next->next != nullptr){
//         temp = temp->next;
//     }

//     Node* tail = temp->next;


//     temp->next = nullptr;
//     tail->back = nullptr;

//     delete(tail);
//     return head->data;
// }

// int main(){
//     vector<int> arr = {2 , 5 , 8 , 7};
//     Node* head = arr2DLL(arr);
//     cout << deleteTailNode(head) << endl;
//     print(head);
//     return 0;
// }

// //---------------------------------//
// //3.DeletingTheKthNode
// int deleteKthNode(Node* &head , int n){

//     Node* temp = head;

//     for(int i=1;i<n-1;i++){
//         temp = temp->next;
//     }
    
//     temp->next = nullptr;
//     tail->back = nullptr;

//     delete(tail);
//     return head->data;
// }

// int main(){
//     vector<int> arr = {2 , 5 , 8 , 7};
//     Node* head = arr2DLL(arr);

//     int n;
//     cin >> n;

//     cout << deleteKthNode(head , n) << endl;
//     print(head);
//     return 0;
// }

// //---------------------------------//
// //4.DeletingTheKthNode
// int deleteNodeX(Node* &pointit , Node* &head, int n){


//     if(pointit == head){
//         head = nullptr;
//         delete(pointit);
//         return head->data;
//     }

//     Node* temp = pointit;
    
//     Node* prev = temp->back;
//     prev->next = temp->next;
//     temp->back = nullptr;
//     temp->next = nullptr;

//     delete(temp);

//     return head->data;
// }

// int main(){
//     vector<int> arr = {2 , 5 , 8 , 7};
//     Node* head = arr2DLL(arr);

//     int n;
//     cin >> n;

//     Node* pointit = head;
//     while(pointit->data != n){
//         pointit = pointit->next;
//     }

//     cout << deleteNodeX(pointit , head , n) << endl;
//     print(head);
//     return 0;
// }

// //---------------------------------//
// //5.InsertBeforeHead
// int insertb4Head(Node* &head, int n){

//     Node* temp = new Node(n);
//     temp->next = head;
//     head->back = temp;
//     head = temp;
    
//     return head->data;
// }

// int main(){
//     vector<int> arr = {2 , 5 , 8 , 7};
//     Node* head = arr2DLL(arr);

//     int n;
//     cin >> n;

//     cout << insertb4Head(head , n) << endl;
//     print(head);
//     return 0;
// }


// //---------------------------------//
// //6.InsertBeforeTail
// int insertb4Head(Node* &head, int n){

//     Node* temp = new Node(n);
//     Node* mover = head;

//     while(mover->next->next != nullptr){
//         mover = mover->next;
//     }

//     mover->next->back = temp;
//     temp->next = mover->next;
//     mover->next = temp;
//     temp->back = mover;

//     return head->data;
// }

// int main(){
//     vector<int> arr = {2 , 5 , 8 , 7};
//     Node* head = arr2DLL(arr);

//     int n;
//     cin >> n;

//     cout << insertb4Head(head , n) << endl;
//     print(head);
//     return 0;
// }


//---------------------------------//
//7.InsertBeforeKthNode
// int insertb4Head(Node* &head, int n , int k){

//     Node* temp = new Node(n);
//     Node* mover = head;

//     for(int i=1;i<k-1;i++){
//         mover = mover->next;
//     }

//     mover->next->back = temp;
//     temp->next = mover->next;
//     mover->next = temp;
//     temp->back = mover;

//     return head->data;
// }

// int main(){
//     vector<int> arr = {2 , 5 , 8 , 7};
//     Node* head = arr2DLL(arr);

//     int n;
//     cout << "val" << endl;
//     cin >> n;

//     int k;
//     cout << "pos" << endl;
//     cin >> k;

//     cout << insertb4Head(head , n , k) << endl;
//     print(head);
//     return 0;
// }

//---------------------------------//
//8.InsertBeforeKthNode
// int insertb4Head(Node* &head, int n , int k){

//     Node* temp = new Node(n);
//     Node* mover = head;

//     while(mover->next->data != k){
//         mover = mover->next;
//     }

//     mover->next->back = temp;
//     temp->next = mover->next;
//     mover->next = temp;
//     temp->back = mover;

//     return head->data;
// }

// int main(){
//     vector<int> arr = {2 , 5 , 8 , 7};
//     Node* head = arr2DLL(arr);

//     int n;
//     cout << "val" << endl;
//     cin >> n;

//     int k;
//     cout << "matchfor" << endl;
//     cin >> k;

//     cout << insertb4Head(head , n , k) << endl;
//     print(head);
//     return 0;
// }

//Add Cases logic for listlength null & 1.