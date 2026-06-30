//2d array is row major operation. behind the scenes it is linear, eg:[[1,2,3],[1,3,4],[4,5,6]]
#include <iostream>
using namespace std;
int main(){
    int arr[3][4];
    //take input row wise
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    //take input colum wise
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }
    //print elements in even column
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j+=2){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

//print elements in odd column
    for(int i=0;i<3;i++){
        for(int j=1;j<4;j+=2){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}