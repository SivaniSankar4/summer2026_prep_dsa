//https://leetcode.com/problems/merge-sorted-array/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        vector<int> temp;
        while(i<m&&j<n){
            if(nums1[i]<nums2[j]){
                temp.push_back(nums1[i]);
                i++;
            }else{
                temp.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            temp.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            temp.push_back(nums2[j]);
            j++;
        }
        for(int k=0;k<temp.size();k++){
            nums1[k]=temp[k];
        }
    }
};
int main() {
    int m = 3; 
    int n = 3; 
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; 
    vector<int> nums2 = {2, 5, 6};
    Solution s;
    s.merge(nums1, m, nums2, n);
    for (size_t i = 0; i < nums1.size(); ++i) {
        cout << nums1[i];
        if (i < nums1.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}