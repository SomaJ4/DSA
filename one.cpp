#include <bits/stdc++.h>
using namespace std;

// void print1(int n){
//     for(int i=n;i>=1;i=i-1){
//         for(int j=i;j>=1;j=j-1){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// Pattern 6
// void print1(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// Pattern 7
// void print1(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout << " ";
//         }
//         for(int k=1;k<=2*i-1;k++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

//Pattern 8
// void print1(int n){
//     for(int i=n;i>=1;i=i-1){
//         for(int j=0;j<=n-i;j++){
//             cout << " ";
//         }
//         for(int k=1;k<=2*i-1;k++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

//Pattern 9
// void print1(int n){
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout << " ";
    //     }
    //     for(int k=1;k<=2*i-1;k++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for(int p=n;p>=1;p=p-1){
    //     for(int j=1;j<=n-p;j++){
    //         cout << " ";
    //     }
    //     for(int k=1;k<=2*p-1;k++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
// }

//Pattern 10
// void print1(int n){
//     for(int i=1;i<n;i++){
//         for(int j=1;j<=i;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for(int p=n;p>=1;p=p-1){
//         for(int j=1;j<=p;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

//Pattern 11
// int print1(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if(i%2==0){
//                 if(j%2!=0){
//                     cout << "0 ";
//                 }
//                 else{
//                     cout << "1 ";
//                 }           
//             }
//             else{
//                 if(j%2==0){
//                     cout << "0 ";
//                 }
//                 else{
//                     cout << "1 ";
//                 }
//             }
//         }
//         cout << endl;
//     }
// }

//Pattern 12
// void print1(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int k=1;k<=2*n-2*i;k++){
//             cout<<" ";
//         }
//         for(int p=i;p>=1;p--){
//             cout<<p;
//         }
//         cout << endl;
//     }
// }

//Pattern 13
// void print1(int n){
//     int k;
//     k=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout << k << " ";
//             k++;
//         }
//         cout << endl;
//     }
// }

//Pattern 14
// void print1(int n){
//     for(int i=1;i<=n;i++){
//         for(char ch = 'A'; ch<'A'+i; ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

//Pattern 15
// void print1(int n){
//     for(int i=1;i<=n;i++){
//         for(char ch = 'A'; ch<'A'+n-i; ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

//Pattern 16
// void print1(int n){
//     char ch = 'A';
//     for(int i=1;i<=n;i++){
//         for(int j=1; j<=i; j++){
//             cout << ch << " ";
//         }
//         ch++;
//         cout << endl;
//     }
// }

//Pattern 17
// void print1(int n){
//     char ch;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout << " ";
//         }
//         for(ch='A';ch<'A'+i;ch++){
//             cout << ch;
//         }
//         for(ch=ch;ch>='A';ch=ch-1){
//             cout << ch;
//         }  
//         cout << endl;
//     }
// }

// Pattern 18
// void print1(int n){
//     char ch;
//     for(int i=1;i<=n;i++){
//         for(ch = 'A'+n-i; ch<='A'+n-1; ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// int main(){
//     cout << "enter n";
//     int n;
//     cin >> n;
//     print1(n);

//     return 0;
// // }

// int main(){
   
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(11);
    // v.push_back(111);
    // v.push_back(1111);
    // v.push_back(11111);

    // v.erase(v.begin()+2 , v.begin()+5);
    

    //iterator
    // vector<int>::iterator it = v.end();
    
    // for(int i=0;i<5;i++){
    //     it--;
    //     cout << *(it) << " ";
    // }
    

    // for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    //     cout << *(it) << " ";
    // }

    // for(auto it = v.begin(); it != v.end(); it++){
    //     cout << *(it) << " ";
    // }

    // vector<int> v(2,100);
    // v.insert(v.begin()+1,2,3);

    // for(auto it = v.begin(); it != v.end(); it++){
    //     cout << *(it) << " ";
    // }

//     v.clear();
//     cout << v.empty();




//     return 0;
// }


//Print Name 5 times (Recursion 2nd video 1st problem)
// int ct = 5;

// void pf(){
//     if (ct == 0){
//         return;
//     }
//     cout << "Soham" << endl;
//     ct--;
//     pf();
// }

// int main(){

//     pf();

// return 0;
// }


//Print Name n times (Recursion 2nd video 1st problem)
// void pf(int i,int n){
//     if(i>n){
//         return;
//     }
//     cout << "Soham" << endl;
//     pf(i+1,n);
// }

// main(){
//     int i,n;
//     i = 1;
//     cin >> n;
//     pf(i,n);
//     return 0;
// }

//Print Linearly from 1 to N

// int ct = 1;

// void f(int ct, int n){
//     if (ct > n){
//         return;
//     }
//     cout << n << endl;
//     f(ct,n-1);
// }

// main(){
//     int n;
//     cin >> n;
//     f(ct,n);
//     return 0;
// }

//Print Linearly from 1 to N with backtracking

// void f(){
//     y = n-i+1
//     x = n
//     y-x
//     print()
// }

// main(){
//     int i,n;
//     f();
//     return 0;
// }



//print 1 to n linearly by backtracking

// void pf(int i,int n){
//     if(i<1){
//         return;
//     }
//     pf(i-1,n);
//     cout << i << endl;
// }

// main(){
//     int i , n;
//     cin >> n;
//     i = n;
//     pf(i,n);
//     return 0;
// }

//print n to 1 linearly by backtracking

// void pf(int i,int n){
//     if(i>n){
//         return;
//     }
//     pf(i+1,n);
//     cout << i <<endl;
// }

// main(){
//     int i, n;
//     cin >> n;
//     i = 1;
//     pf(i,n);
//     return 0;
// }

//sum of first N numbers using recursion
// void sum(int i, int n, int s){
//     if(i>n){
//         cout << s << endl;
//         return;
//     }
//     sum(i+1,n,s+i);    
// }

// main(){
//     int i , n , s;
//     cin >> n;
//     i = 1;
//     s = 0;
//     sum(i,n,s);
//     return 0;
// }

//sum of first N numbers using parameterised recursion
// void sum(int i,int s){
//     if(i<1){
//         cout << s << endl;
//         return;
//     }
//     sum(i-1 , s+i);
// }

// main(){
//     int i , n , s;
//     cin >> n;
//     i = n;
//     s = 0;
//     sum(i,s);
//     return 0;
// }

//sum/factorial of first N numbers using functional recursion
// int sum(int n){
//     if(n == 1){
//         return 1;
//     }
//     return n * sum(n-1);
// }

// main(){
//     int n;
//     cin >> n;
//     cout << sum(n) << endl;
// }


//reversing an array with recursion
// void rev(int arr[],int p,int np){
//     if(p>=np){
//         return;
//     }
//     int temp;
//     temp = arr[p];
//     arr[p] = arr[np];
//     arr[np] = temp;

//     rev(arr,p+1,np-1);
// }

// main(){
//     int size;
//     cin >> size;
//     int arr[size];
//     int i , p , np;
//     p=0;
//     np = size-1;

//     for(i=0;i<size;i++){
//         cout << "Enter a number";
//         cin >> arr[i];
//     }

//     cout << "initial array : ";
//     for(i=0;i<size;i++){
//         cout << arr[i] << " ";
//     }

//     rev(arr,0,size-1);
//     cout << "Reversed array : ";
//     for(i=0;i<size;i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


//Reversing An Array with one-pointer recursion
// void rev(int arr[],int i,int n){
//     if(i>=n-i){
//         return;
//     }
//     int temp;
//     temp = arr[n-i];
//     arr[n-i] = arr[i];
//     arr[i] = temp;

//     rev(arr,i+1,n);
// }

// main(){
//     int size;
//     cin >> size;
//     int arr[size];
//     int i , n;
//     i=0;
//     n = size-1;

//     for(i=0;i<size;i++){
//         cout << "Enter a number";
//         cin >> arr[i];
//     }

//     cout << "initial array : ";
//     for(i=0;i<size;i++){
//         cout << arr[i] << " ";
//     }

//     rev(arr,0,size-1);
//     cout << "Reversed array : ";
//     for(i=0;i<size;i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

//Palindrome Checking via recursion
// bool rev(int arr[],int i,int n){
//     if(i>=n-i){
//         return true;
//     }

//     if(arr[i] != arr[n-i]){
//         cout << "not a palindrome";
//         return false;
//     }


//     return rev(arr,i+1,n);
    
// }

// main(){
//     int size;
//     cin >> size;
//     int arr[size];
//     int i , n;
//     i=0;
//     n = size-1;

//     for(i=0;i<size;i++){
//         cout << "Enter a number";
//         cin >> arr[i];
//     }

//     cout << rev(arr,0,size-1);
    
//     return 0;
// }

//<----------------------->


//Hashing Brute Force
// int count(int arr[] , int q , int n , int ct){
//     ct = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i] == q){
//             ct++;
//         }
//     }

//     return ct;
// }


// main(){

//     //accept an array of size 5
//     int n;
//     cin >> n;
//     int arr[n];
//     int ct;

//     for(int i=0;i<n;i++){
//         cout << "Enter a number";
//         cin >> arr[i];
//     }

//     //user queries for a q
//     cout << "Query the array for number : ";
//     int q;
//     cin >> q;

//     //return the count of q
//     cout << "Count for the number" << q << "is : " << count(arr , q , n , ct) << endl;

//     return 0;
// }


//<------------------->


//Actual Hashing No Brute Force (Precomputation / frequency arrays)

// main(){
//     int n;
//     cin >> n;
//     int arr[n];

//     //creating a normal array
//     for(int i = 0 ; i < n ; i++){
//         cout << "Enter a number";
//         cin >> arr[i];
//     }

//     //precompute
//     //hash array
//     // 0 0 0 0 0 0 0 0 0 0 0 0 
//     int hash[13] = {0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }

//     //fetch
//     int k;
//     cout << "enter the query number" << endl;
//     cin >> k;
//     cout << hash[k];


//     return 0;
// }


//Lowercase character hashing
// main(){
//     string s;
//     cin >> s;

//     //precompute
//     int hash[256] = {0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]]++;
//     }

//     char k;
//     cout << "query a character";
//     cin >> k;
//     cout << hash[k] << endl;


//     return 0;
// }

// //Hashing Using Map
int main(){
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int ,int> mpp;


    //input + precompute 
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }


    //iterating in the map
    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }


    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;

        //fetch
        cout << mpp[number] << endl;
    }


    return 0;
}

//Selection Sort