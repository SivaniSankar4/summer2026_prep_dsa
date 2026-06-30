//recursion is when a function calls itself until the base class is met. 
//Basically, a smaller problem is done repeatedly until the  bigger problem is solved.
/*
void dest(int des,int step){
if(step==des) break;
step++;
dest(des,step);
}
void print(int n){
if(n==0) break;
cout<<n<<endl;      prints from n to 1
print(n-1);
}
*/
/*to print from 0 to n

#include <iostream>
using namespace std;
void print(int x,int n){
if(x>n){
 return;
}
cout<<x<<endl;
print(x+1,n);
}
int main(){
    int n=10;
    print(0,n);
    return 0;
}

*/
/*correct use of recursion
#include <iostream>
using namespace std;
void print(int n){
if(n==0) return;
print(n-1);
cout<<n<<endl;      //prints from 1 to n
}
int main(){
    int n=10;
    print(n);
    return 0;
}
    */