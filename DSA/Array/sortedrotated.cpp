//Pair sum in a sorted and rotated array
//https://www.geeksforgeeks.org/problems/pair-sum-in-a-sorted-and-rotated-array/1
//NOTE: always think of modulo whenever you see rotated array
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        // code here
        int pivot=0;
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                pivot=i+1;
                break;
            }
        }
        int i=pivot;
        /*int j=pivot-1; if we directly do this and pivot is at index 0 then j becomes -1 and it becomes out of bound */
        int j= (pivot - 1 + n) % n; //this directs j to last index whenever it becomes -1
        while(i!=j){
            int sum= arr[i]+arr[j];
            if(sum== target){
                return true;
            }else if(sum<target){
                i=(i+1)%n;
            }else{
                j=(j-1+n)%n;
            }
        }
        return false;        
    }
};
int main(){
    vector<int> arr = {11, 15, 6, 8, 9, 10};
    int target = 16;
    Solution s;
    if (s.pairInSortedRotated(arr, target))
        cout << "true";
    else
        cout << "false";

    return 0;
}