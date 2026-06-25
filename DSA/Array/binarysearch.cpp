//very optimized 
#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr,int key){
    int l=0;
    int h=arr.size()-1;
    int mid;
    while(l<=h){
        mid=l+(h-l)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            l=mid+1;
        }else{
            h=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={2,3,4,5,6,7,8,9,11,12};
    int key=11;
    cout<<binarySearch(arr,key);

}