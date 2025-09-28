// 2. Sort in Descending Order (Medium)
// Modify Bubble Sort to sort in descending order.
// Input: nums = [3, 7, 2, 9, 1]
// Output: [9, 7, 3, 2, 1]

#include<iostream>
using namespace std;
int main()

{
    int arr[] = {3, 7, 2, 9, 1};
    int n = 5;
    for(int i =1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]<arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}