#include <iostream>
#include <stack>
using namespace std;
void reverseString(string str){
    stack<string> s;
    for(int i=0;i<str.length();i++){
        string ans="";
        while(str[i]!=' '){
            ans+=str[i];
            i++;
        }
        s.push(ans);
        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
        }
    }
}
int main(){
                  
}