#include <iostream>
#include <string>
using namespace std;
bool ispal(string s,int i,int j){
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
bool isvalid(string s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return (ispal(s,i+1,j)||ispal(s,i,j-1));
        }
        i++;
        j--;
    }
    return true;

}
int main(){
    string s="abcda";
    string result=isvalid(s)?"true":"false";
    cout<<result;
}