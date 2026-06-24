#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxm=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count+=1;
                //maxm=max(count,maxm);
            }else{
                maxm=max(count,maxm);
                count=0;
            }
        }
        return maxm;
    }
};
int main(){
    vector<int> nums={1,1,1,1,0,0,0,1,0,1,1,1};
    Solution s;
    cout<<s.findMaxConsecutiveOnes(nums)<<endl;
    return 0;
}