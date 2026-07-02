#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        //ascii 'A'=65 'a'=97
        for(char &c:s){
            c=tolower(c);
        }
        int i=0;
        int j=s.length()-1;
        while(i<j){
            while(i<j&&!isalnum(s[i])){
                i++;
            }
            while(i<j&&!isalnum(s[j])){
                j--;
            }
            if(s[i]==s[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
};
int main(){
    string s="A man, a plan, a canal: Panama";
    Solution ans;
    string result=ans.isPalindrome(s)?"true":"false";
    cout<<result<<endl;

}