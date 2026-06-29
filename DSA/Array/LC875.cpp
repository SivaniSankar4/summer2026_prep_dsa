//https://leetcode.com/problems/koko-eating-bananas/description/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class Solution {
public:
    int maxele(vector<int>& arr){
        int maxel=INT_MIN;
        for(int i=0;i<arr.size();i++){
            maxel=max(maxel,arr[i]);
        }
        return maxel;
    }
    long long findhours(int mid, vector<int> piles){
        long long total=0;
        for(int i=0;i<piles.size();i++){
            double hr=ceil((double)piles[i]/mid);
            total+=hr;
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=-1;
        int low=1;
        int high=maxele(piles);
        while(low<=high){
            int mid=low+(high-low)/2;
            long long hrs=findhours(mid,piles);
            if(hrs<=h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};
int main(){
    vector<int> piles={3,6,7,11};
    int h=8;
    Solution s;
    cout<<s.minEatingSpeed(piles,h)<<endl;
    return 0;
}