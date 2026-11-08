
#include<bits/stdc++.h>
using namespace std;

//Stacks

//implement of stack using array

// class stImpl{
//     top is just smart indexing to iterate and fill smartly through the stack.
//     top = -1 , int st[10];
//
//     void push(int x){
//         if(top<9){
//             making it the new top and then assigning its value to it.
//             top=top+1;
//             st[top]=x;    
//         }
//     }
//
//     int top(){
//         if(top == -1){
//             cout << " ";
//             return 0;
//         }
//         return st[top];
//     }
// 
//     void pop(){
//         if(top==-1) return;
//         // st[top] ke sath khilwad
//         top = top-1;
//     }
// 
//     int size(){
//         return top+1;
//     }
// 
// }

//Queue Using Arrays
class Q {
    static const int size = 10;
    int q[size] , currsize = 0 , start=-1 , end=-1; 

    public:
    void push(int x){
        if(currsize == size){cout<<"queue full";return;}
        if(currsize == 0){start = end = 0;}
        else{
            end = (end+1)%size;
        }
        q[end]=x;
        currsize++;
    }

    public:
    int pop(){
        if(currsize == 0){return -1;}

        int el = q[start];
        
        if(currsize == 1){start = end = -1;}
        
        else{
            start = (start+1)%size;
        }
        currsize--;
        return el;
    }

    public:
    int top(){
        if(currsize == 0){return -1;}

        return q[start];
    }

    public:
    int sizeOfQueue(){
        return currsize;
    }
};

int main(){

    Q q;
    q.push(2);
    q.push(3);
    q.push(5);



    cout << q.pop() << endl;
    cout << q.top() << endl;
    cout << q.sizeOfQueue() << endl; 


    return 0;
}