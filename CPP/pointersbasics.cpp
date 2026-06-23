#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a; //never leave a pointer dangling (dangling pointer a pointer that doesnt point anywhere) bcs it causes memory leak
    //wild pointer is a when we create a pointer that points to an entity then remove the enetity
    // cout<<a<<endl;
    // cout<<&a<<endl;

    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;

    cout<<*(ptr+1)<<endl;
    cout<<*ptr + 1<<endl;
    cout<<ptr+1<<endl;
}