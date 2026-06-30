//factorial
/*
#include <iostream>
using namespace std;
int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1);

}
int main(){
    int n=5;
    cout<<fact(n);
}
*/

/*
//fibonaccii
#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n=7;
    cout<<fibonacci(n)<<endl;
}
*/
#include <iostream>
using namespace std;
bool linearSearch(int arr[], int size, int key){
    if(size==0) return false;
    if(arr[0]==key) return true;
    return linearSearch(arr+1,size-1,key);
}
bool binarySearch(int arr[],int left,int right, int key){
    if (left > right) {
        return false;
    }
    int mid=left+(right-left)/2; 
    if(arr[mid]==key){
        return true;
    }else if(arr[mid]<key){
        return binarySearch(arr,mid+1,right,key);
    }else{
        return binarySearch(arr,left,mid-1,key);
    }
}
int main(){
    int arr[]={3,7,15,22,26,28,29};
    int key=11;
    int size=7;
    int left=0;
    int right=6;
    // if(linearSearch(arr,size,key)){
    //     cout<<"true";
    // }else{
    //     cout<<"false";
    // }

    if(binarySearch(arr,left,right,key)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}