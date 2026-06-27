//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int first(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int f=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                f=mid;
                high=mid-1;
            }else if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return f;
    }
    int last(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int l=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                l=mid;
                low=mid+1;
            }else if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return l;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        vector<int> ans(2,-1);
        ans[0]=first(nums,target);
        ans[1]=last(nums,target);
        return ans;
    }
};
int main(){
    vector<int> arr={1,2,3,4,5,5,5,5,6,7,8,9};
    int tar=5;
    Solution s;
    vector<int> ans=s.searchRange(arr,tar);
    cout<<ans[0]<<" , "<<ans[1]<<endl;
    return 0;
}
