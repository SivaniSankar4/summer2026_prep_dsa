class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int length=0;
        unordered_map<char,int> mp;
        while(j<s.length()){
            mp[s[j]]++;
            while(mp[s[j]]>1){
                mp[s[i]]--;
                i++;
            }
            if(length<j-i+1){
                length=j-i+1;
            }
            j++;
        }
        return length;
    }
};
