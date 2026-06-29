#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
            
        }
    }
};
int main(){
    vector<int> nums={1,4,0,2,0,5,0,0,5,6};
    Solution s;
    s.moveZeroes(nums);
    return 0;
}