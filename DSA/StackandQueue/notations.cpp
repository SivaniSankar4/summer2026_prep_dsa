#include <iostream>
#include <stack>
using namespace std;
int prefixeval(string s){
    stack<int> st;
    //traverse from right to left
    //if s[i] is operand -> push in stack
    //else pop two elements from stack and operate with two with operator and push result back to stack
    //return the last remaining element from stack as the answer
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>='0'&&s[i]<='9'){
            st.push(s[i]-'0');
        }else{
            int o1=st.top();
            st.pop();
            int o2=st.top();
            st.pop();
            switch(s[i]){
                case '+':
                    st.push(o1+o2);
                    break;
                case '-':
                    st.push(o1-o2);
                    break;
                case '*':
                    st.push(o1*o2);
                    break;
                case '/':
                    st.push(o1/o2);
                    break;
                case '^':
                    st.push(o1^o2);
                    break;
            }
        }
    }
    return st.top();
}
int main(){
    string s = "-+7*45+20";
    int ans=prefixeval(s);
    cout<<ans;
}