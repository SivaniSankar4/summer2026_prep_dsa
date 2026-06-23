#include <iostream>
using namespace std;
//functions are stored in the form of call stack
//void function
void func1(int num){
    cout<<"value of num is:"<<num<<endl;
}
//int function, return type integer
int func2(int num){
    int ans= 2*num;
    return ans;
}
void doubleTheNum(int num){
    num*=2;
    cout<<"inside the funtion:"<<num<<endl;
}
void doublebyref(int &num){
    num*=2;
    cout<<"inside the funtion:"<<num<<endl;
}
int main(){
    // func1(10);
    // cout<<func2(20);

    // int a=10; // in the memory a 4 byte memory block is reserved named 'a' at a address
    // cout<<a<<endl;//prints value of a
    // cout<<&a<<endl;//prints address of a

    // int &b=a;
    // cout<<b<<endl;//prints value of a that is 10

    int num=10;
    doubleTheNum(num);
    cout<<"Outside the function:"<<num<<endl;

    doublebyref(num); //here this passes only reference and th function doesnt create an entirely new copy
    cout<<"Outside the function by ref:"<<num<<endl;
    
}