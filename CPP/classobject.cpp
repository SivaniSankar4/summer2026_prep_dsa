#include <iostream>
using namespace std;
/*What is a class and object?
    class is the paln of a building and object is the actual building made using it
    class is a blue print of an object which means it is the structure of that object.
    object is the actual intance created using that blueprint*/
    //class has data members and member functions/methods. data members is the variable created in the class and methods are the funtions
    //by default the data members are private, they cant be accessed from outside the class
    //class doesnt consume any space till we make an object of that class

/*constructor method 
    is a method that has same name as the class name, 
    has no return type, 
    it is called automatically as soon as an object is created,
    if we dont intialize a constructor a default constructor automatically calls*/

class Node{
    int data;
    Node *next;

    Node(int val){//constructor
        data=val;
        next=NULL;
    }
};
int main(){
    
}