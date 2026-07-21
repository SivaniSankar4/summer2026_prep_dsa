//https://www.geeksforgeeks.org/problems/longest-distinct-characters-in-string5848/1
#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        unordered_map<char,int> mp;
        int l=0;
        int ans=0;
        for(int r=0;r<s.length();r++){
            mp[s[r]]++;
            while(mp[s[r]]>1){
                mp[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            
        }
        return ans;
    }
};
