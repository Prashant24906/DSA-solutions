
#include<iostream>
using namespace std;
int main()

{
    int k = 7;
    int arr[] = {4,2,7,1,9};
    int n = 5;
    for(int i= 0;i<n;i++){
        if(arr[i]==k){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
