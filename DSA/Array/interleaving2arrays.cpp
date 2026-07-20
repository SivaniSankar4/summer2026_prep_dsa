#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        for(int x:nums1){
            mp[x]++;
        }
        
        vector<int> ans;
        for(int z:nums2){
            if(mp.count(z)){

                ans.push_back(z);
                mp.erase(z);
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        for(int x:nums1){
            mp[x]++;
        }
        vector<int> ans;
        for(int y:nums2){
            if(mp[y]>0){
                ans.push_back(y);
                mp[y]--;
            }
        }
        return ans;
    }
};