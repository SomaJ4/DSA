#include <bits/stdc++.h>
using namespace std;

//selection sort

// void selection_sort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int temp , min;
//         min = i;

//         for(int j=i;j<n;j++){
//             if( arr[j] < arr[min] ){
//                 min = j;
//             }
//         }

//         temp = arr[min];
//         arr[min] = arr[i];
//         arr[i] = temp;
//     }
// }

//bubble sort
// void bubble_sort(int arr[],int n){
//     for(int i=n-1;i>=1;i--){
//         int didswap = 0;
//         for(int j=0;j<i;j++){
//             if(arr[j] > arr[j+1]){
//                 //swap
//                 int temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp;
//                 didswap = 1;
//             }
//         }
//         if(didswap == 0){
//             break;
//         }
//         cout << "runs\n";
//     }
// }
// void bubble_sort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j] > arr[j+1]){
//                 //swap
//                 int temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

//insertion sort
// void insertion_sort(int arr[], int n){
//     for(int i=0;i<n;i++){
//         for(int j=i;j>=1;j--){
//             if(arr[j]<arr[j-1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j-1];
//                 arr[j-1] = temp;
//             }
//         }
//     }
// }

// main(){
//     int n;
//     cin >> n;
//     int arr[n];


//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     bubble_sort(arr , n);

//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


//merge sort

void merge_sort(int arr[] , int n){
        int start = 0;
        int end = n-1;
        int j;
        arr[j];
    //recursively divide the arrays
    for(int i=start;i<end;i++){
        arr[j] = arr[i]
        start = 0;
        end = (end/2) + 1;
    }

    for(int i=start;i<end;i++){
        arr[j] = arr[i]
        start = 
    }
    //merge and update tha above arrays
}




main (){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    merge_sortdiv(arr , n);

    return 0;
}