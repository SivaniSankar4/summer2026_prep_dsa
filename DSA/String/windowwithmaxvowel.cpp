#include <iostream>
#include <string>
using namespace std;
bool isVowel(char ch){
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}
int maxValue(string s, int k){
    int count=0;
    for(int i=0;i<k;i++){
        if(isVowel(s[i])) count++;
    }
    int maxv=count;
    for(int i=k;i<s.length();i++){
        if(isVowel(s[i-k])){
            count--;
        }
        if(isVowel(s[i])){
            count++;
        }
        maxv=max(maxv,count);
    }
    return maxv;
}
int main(){
    string s="abciiidef";
    int k=3;
    cout<<maxValue(s,k)<<endl;
}