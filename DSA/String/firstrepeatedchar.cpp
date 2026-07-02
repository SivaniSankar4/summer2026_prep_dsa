#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
  public:
    string firstRepChar(string s) {
        // code here.
        unordered_map<char,int> m;
        string str="-1";
        for(char c:s){
            m[c]++;
            if(m[c]>1){
                str={c};
                return str;
            }
        }
        return str;
    }
};
// class Solution {
//   public:
//     string firstRepChar(string s) {
//         // code here.
//         vector<bool> seen(256,false);
//         for(char c:s){
//             if(seen[c]){
//                 return {c};
//             }
//             seen[c]=true;
//         }
//         return "-1";
//     }
// };
int main(){
    string s="geeksforgeeks";
    Solution sh;
    cout<<sh.firstRepChar(s);
}