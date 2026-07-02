#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        unordered_map<char,int> n;
        if(s.length()!=t.length()) return false;
        for(char h:s){
            m[h]++;
        }
        for(char h:t){
            n[h]++;
        }
        if(m==n) return true;
        else return false;

    }
    bool method2(string s,string t){
        if(s.length()!=t.length()) return false;
        int arr[26];
        for(char i:s){
            arr[i-'a']++;
        }
        for(char i:t){
            arr[i-'a']--;
            if(arr[i-'a']<0)return false;
        }
        return true;
    }
};
int main(){
    string s="anagram";
    string t="nagamara";
    Solution ans;
    string result=ans.isAnagram(s,t)?"true":"false";
    cout<<result<<endl;
    string r2=ans.method2(s,t)?"true":"false";
    cout<<r2;
}