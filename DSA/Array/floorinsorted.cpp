//http://geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1
#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int low=0;
        int high=arr.size()-1;
        int ans=-1;
        if(high==0){
            return arr[0]<x?0:-1;
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==x){
                ans=mid;
                low=mid+1;
            }else if(arr[mid]<x){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
    }
};
int main()
{
    vector<int> arr = {1, 2, 4, 6, 10, 12, 14};
    int x = 7;
    Solution s;
    int index = s.findFloor(arr, x);
    cout << index;
    return 0;
}

