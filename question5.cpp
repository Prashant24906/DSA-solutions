// 5. Find Last Occurrence (Medium)
// Find the last occurrence of target using Linear Search.
// Input: nums = [2, 4, 4, 4, 9], target = 4
// Output: 3

#include<iostream>
using namespace std;
int main()

{
    int arr[] = {2, 4, 4, 4, 9};
    int n = 5;
    int target = 4;
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]>target){
            e = mid -1;
        }
        else s= mid+1;
        mid = s+(e-s)/2;
    }
    cout<<"The last occurence is at: "<<e;
    return 0;
}