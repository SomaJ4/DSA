#include<bits/stdc++.h>
using namespace std;

//2. Second Largest element in an array
//first attempt
// int find(int arr[] , int n){
//     int l = 0;
//     //assuming array does not contain any negative numbers
//     //if it does , take sl = INT_MIN
//     int sl = -1;

//     for(int i=0;i<n;i++){
//         if(arr[i] > l){
//             //pehle second larget ko update krdiya to the previously largest value
//             sl = l;
//             //and ab largest ko update kr rahe he to the newly largest value
//             l = arr[i];
//             //we do have access to largest wvala i in this if
//         }
//         else if (arr[i] > sl && arr[i] < l){
//             sl = arr[i];
//         }
//     }

//     return(sl);
// }

// main(){
//     int n;
//     cin >> n;
//     int arr[n];

//     for(int i=0;i<n;i++){
//         cout << "Enter the " << i << "th element : ";
//         cin >> arr[i];
//     }

//     cout << find(arr , n) << endl;

//     return 0;
// }

//comments after discovering this solution
//i think we can optimize the space complexity further by pointers
//bcoz we've taken 2 variables , one for sl and one slc
//we can use just one pointer somehow maybe ig


//Q.3 Second Largest & Second Smallest
// 
// 
// int secondLargest(int arr[] , int n){
//     int l = 0;
//     int sl = -1;

//     for(int i=0;i<n;i++){
//         if(arr[i] > l){
//             sl = l;
//             l = arr[i];
//         }
//         else if (arr[i] > sl && arr[i] < l){
//             sl = arr[i];
//         }
//     }

//     return(sl);    
// }

// int secondSmallest(int arr[] , int n){
//     int s = INT_MAX;
//     int ss = INT_MAX;

//     for(int i=0;i<n;i++){
//         if(arr[i] < s){
//             ss = s;
//             s = arr[i];
//         }
//         else if (arr[i] < ss && arr[i] > s){
//             ss = arr[i];
//         }
//     }

//     return(ss);    
// }


// main(){
//     int n;
//     cin >> n;
//     int arr[n];

//     for(int i=0;i<n;i++){
//         cout << "Enter the " << i << "th element : ";
//         cin >> arr[i];
//     }

//     int slargest = secondLargest(arr , n);
//     int ssmallest = secondSmallest(arr , n);

//     cout << "slargest : " << secondLargest(arr,n) << endl;
//     cout << "ssmallest : " << secondSmallest(arr,n) << endl;

//     return 0;
// }


//Q.4 Check if the array is sorted 

// int check(int arr[] , int n){

//     for(int i=1;i<n;i++){
//         if(arr[i] >= arr[i-1]){
//         }
//         else{
//             return false;
//         }
//     }
//     return true;
// }

// main(){
//     int n;
//     cin >> n;
//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     check(arr, n);

//     return 0;
// }


//Q.5 Remove Duplicates from a sorted array
// given array will be sorted
// example : arr[] = [1 , 1 , 2 , 2 , 2 , 3 , 3]

// int duplimodify(int arr[] , int n){
//     int i = 0;
//     for(int j=1;j<n;j++){
//         if(arr[j] != arr[i]){
//             arr[i+1] = arr[j];
//             i++;
//         }
//     }

//     return i+1;
// }

// main(){
//     int n;
//     cin >> n;
//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     cout << duplimodify(arr, n) << endl;


//     return 0;
// }


//2nd video of arrays now

//Q.1 Left Rotate an array by one place
// arr[] = [1 , 2 , 3 , 4 , 5]
// Rotated arr[] = [2 , 3 , 4 , 5 , 1]

//by k places better
// #include <iostream>
// #include <vector>
// using namespace std;

// void rotate(int arr[], int n) {
//     int k;
//     cout << "rotate by: ";
//     cin >> k;

//     k = k % n;

//     int temp[n];
//     for(int i=0 ; i<n;i++){

//         if(i>=k){
//             temp[i-k] = arr[i];
//         }
//         else if(i<k){
//             temp[n-k+i] = arr[i]; 
//         }
//     }

//     //temp[] = [n-k , n-k+1 , n-k+2 , ...... , 0 , 1 , 2 ...... n-1-k]
//     for(int i=0;i<n;i++){
//         arr[i] = temp[i];
//     }
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     rotate(arr, n);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

//optimal 
//reverse pe reverse

// void rotate(int arr[], int n) {
//     int k;
//     cout << "rotate by: ";
//     cin >> k;

//     int temp = 0;
//     k = k % n;

//     reverse(arr,arr+k);
//     reverse(arr+k,arr+n);
//     reverse(arr , arr+n);
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     rotate(arr, n);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

//Right Rotate()

// void rotate(int arr[], int n) {
//     int k;
//     cout << "rotate by: ";
//     cin >> k;

//     k = k % n;

//     reverse(arr , arr + n - k);
//     reverse(arr + n - k , arr + n);
//     reverse(arr , arr + n);
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     rotate(arr, n);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


//Q.3 move zeroes to end

// void move(int arr[], int n) {
//     vector<int> temp;

//     for(int i=0;i<n;i++){
//         if(arr[i] != 0){
//             temp.push_back(arr[i]);
//         }
//     }

//     for(int i=0;i<temp.size();i++){
//         arr[i] = temp[i];
//     }

//     int nz = temp.size();

//     for(int i=nz;i<n;i++){
//         arr[i] = 0;
//     }
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     move(arr, n);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// void move(int arr[], int n) {
//     vector<int> temp;

//     int e = 0;
//     int p = 1;
//     for(int i=0;i<n;i++){
//         if(i %2 != 0){
//             temp.push_back(1);
//             p++;
//         }
//         else if(i%2 == 0){
//             temp.push_back(0);
//             e = p;
//             e++;
//         }
//     }

//     for(int i=0;i<temp.size();i++){
//         arr[i] = temp[i];
//     }

//     int nz = temp.size();

//     for(int i=nz;i<n;i++){
//         arr[i] = 0;
//     }
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];

//     move(arr, n);

//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     if(n%2 != 0){
//         cout << "even : " << (n+1)/2 << endl;
//         cout << "prime : " << n - (n+1)/2 << endl;
//     }
//     else if(n%2 == 0){
//         cout << (n+1)/2;
//     }

//     return 0;
// }


//Union of two sorted arrays


int main(){

    int k , i , j , n1 , n2 , n;
    cin >> n1;
    int arr1[n1];

    for(i=0;i<n1;i++){
        cin >> arr1[i];
    }

    cin >> n2;
    int arr2[n2];
    for(j=0;j<n2;j++){
        cin >> arr2[j];
    }


    set<int> st;
    
    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }

    for(int i=0;i<n2;i++){
        st.insert(arr2[i]);
    }

    int union[set.size()];

    for(auto it : st){
        union[i++] = it;
    }

    return 0;
}