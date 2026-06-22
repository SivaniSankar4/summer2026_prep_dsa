#include <iostream>
using namespace std;
int main(){ //main is name of method whose data type is int, it doesnt necessarily return int

//Data types Variables
    // int age; // in c++ if not initialised then the memory block holds garbage value.
    // cout<<age<<endl;
    // char name ='A';
    // bool ans = true;

    // /*int -> 4 bytes
    // long long-> 8 bytes
    // float-> 4 bytes. for shorter ,defined ranges for example:marks
    // double -> 8 bytes

    // char-> 1 byte. in ASCII it takes 1 , but more in unicode
    // bool -> 1 byte*/

//Conditional statements
    //if-else
    // int age=20;
    // int num=4;
    // if(age>10&&num>10){
    //     cout<<"test conducted"<<endl;
    // }else{
    //     cout<<"test not conducted"<<endl;
    // }

    //switch
    // char grade = 'A';
    // switch(grade){  //grade id the condition
    //     case 'A':    //case will have the same datatype as condition, here grade.
    //     cout<<"Excellent"<<endl;
    //     break;
    //     case 'B':
    //     cout<<"Good"<<endl;
    //     break;
    //     case 'C':
    //     cout<<"Average"<<endl;
    //     break;
    //     default:
    //     cout<<"Invalid"<<endl;
    // }
    /*in the above i didnt add break first so all the other cases prints because the condition becomes true in the very first condition
    so switch case doesnt check if the others are true or not , so we have to add break in every case, its not necessary in default case*/

    //ternary
    // int x=10,y=20; //find which variable is greater
    // char result= x>y?'x':'y';
    // cout<<result;

//Loops (do pattern printing for logic building) prompt:give me pattern printing questions from very easy to very difficult ,give me hints if i am stuck. never give me answer before i ask for it twice.
    
    //for(initialise;terminate condition;incr/decrem)
    // int n=5;
    // for(int i=0;i<n;i++){
    //     cout<<i<<endl;
    // }

    //while
    // int i=0;
    // while(i<5){
    //     cout<<i<<endl;
    //     i++;
    // }

    //do while, when in question, we have to execute the code first without checking any conditon
    int i=0;
    do{
        cout<<i<<endl;
        i++;
    }while(i<5);// this output includes 5 too, as the condition is checked only after running the loop first

}
