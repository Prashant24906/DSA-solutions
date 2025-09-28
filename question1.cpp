// 1. Sort an Array (Easy)
// Sort the array using Bubble Sort in ascending order.
// Input: nums = [5, 2, 9, 1, 5, 6]
// Output: [1, 2, 5, 5, 6, 9]

#include<iostream>
using namespace std;
int main()

{
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = 6;
    for(int i =1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}