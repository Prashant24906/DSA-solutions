// 3. K-th Largest Element (Hard)
// Using Bubble Sort, find the K-th largest element in the array.
// Input: nums = [3,2,1,5,6,4], k = 2
// Output: 5 

#include<iostream>
using namespace std;
int main()

{
    int k = 2;
    int arr[] = {3,2,1,5,6,4};
    int n = 6;
    for(int i =1;i<k;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]<arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
    cout<<arr[k];
    return 0;
}