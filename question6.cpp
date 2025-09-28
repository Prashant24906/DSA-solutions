// 6. Search in 2D Matrix (Hard)
// Given a 2D matrix, use Linear Search to find a target element.
// Input: matrix = [[1,3,5],[7,9,11],[13,15,17]], target = 9
// Output: (1,1) // row=1, col=1

#include<iostream>
using namespace std;
int main(){
        int mat[3][3] = {{1,3,5},{7,9,11},{13,15,17}};
        int target = 13;
        int n = 3;
        int m = 3;
        int s = 0;
        int e = m*n-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            int row = mid/m;
            int col = mid%m;
            if(mat[row][col] == target){
                cout<<row<<" "<<col<<endl;
                goto end;
            }
            else if(mat[row][col]<target) s = mid+1;
            else e = mid-1;
        }
        cout<<(-1,-1)<<endl;
        end:
        return 0;
}