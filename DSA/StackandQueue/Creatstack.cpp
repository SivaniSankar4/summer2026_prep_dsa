#include <iostream>
using namespace std;

class myStack{
    public:
    int *arr;
    int topindex;
    int size;
    myStack(int size){
        this->size=size;
        arr = new int[size];
        topindex=-1;
    }
    void push(int val){
        if(topindex==size-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        topindex++;
        arr[topindex]=val;
    }
    void pop(int val){
        if(topindex<0){
            cout<<"Stack underflow"<<endl;
            return;
        }
        cout<<"Popped element: "<<arr[topindex]<<endl;
        topindex--;
    }
    void top(){
        if(topindex<0){
            cout<<"empty stack"<<endl;
        }
        cout<<"Top: "<<arr[topindex]<<endl;
    }
};
int main(){
    myStack st;
    st.push();
}