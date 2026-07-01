#include <iostream>
#include <string>
using namespace std;
void reverse(string &s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    
    return;
}
int main(){
    string s="Hello";
    reverse(s);
    cout<<s;
}
