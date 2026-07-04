//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2,-1);
        int i=0;
        int j=numbers.size()-1;
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                ans[0]=i+1;
                ans[1]=j+1;
                return ans;
            }else if(numbers[i]+numbers[j]>target){
                j--;
            }else{
                i++;
            }
        }
        return ans;
    }
};
int main() {
    // 1. Instantiate the Solution class
    Solution solver;

    // 2. Define a SORTED input array and a target value
    // (Note: The two-pointer logic requires a sorted array to work properly)
    vector<int> numbers = {2, 7, 11, 15}; 
    int target = 9;

    // 3. Call the function
    vector<int> result = solver.twoSum(numbers, target);

    // 4. Print the output indices
    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}