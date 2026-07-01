#include <iostream> 
using namespace std;
// int maximum(int arr[][],int rows){
//     for(int i=0;i<rows;i++){
//         for(int j-0;j<)
//     }
// }
// int main(){
//     int arr[3][3]={{2,7,3},{8,4,10},{12,6,5}};
//     int maxsum=maximum(arr[3][3],3);
// }

// void wave(int arr[][4],int rows,int col){
//     for(int i=0;i<col;i++){
//         if(i%2==0){
//             for(int j=0;j<rows;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }else{
//             for(int j=rows-1;j>=0;j--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
  
//     }
//     cout<<endl;
// }
void spiral(int arr[][4],int row,int column){
    int left=0;
    int right=column-1;
    int top=0;
    int bottom=row-1;
    while(top<=bottom&&left<=right){
        for(int i=left;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }
        top++;
        //right column
        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
        }
        right--;
        for(int i=right;i>=left;i--){
            cout<<arr[bottom][i]<<" ";
        }
        bottom--;
        for(int i=bottom;i>=top;i--){
            cout<<arr[i][left]<<" ";
        }
        left++;

    }
}
int main(){
    int arr[4][4]={{6,14,5,12},{8,1,11,16},{10,13,9,4},{2,15,3,7}};
    //wave(arr,4,4);
    spiral(arr,4,4);
}