#include <iostream>
#include <vector>
using namespace std;
class MyCircularQueue {
public:
    vector<int> data;
    int front;
    int rear;
    int size;
    int count;
    MyCircularQueue(int k) {
     this->size=k;
     data.resize(k);
     front=-1;
     rear=-1;
     count=0;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        if(isEmpty())front = 0;
        rear=(rear+1)%size;
        data[rear]=value;
        count++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        if(count == 1){
            front = rear = -1;
        }else{
            front = (front + 1) % size;
        }
        count--;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return data[front];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return data[rear];        
    }
    
    bool isEmpty() {
        return (count==0);
    }
    
    bool isFull() {
        return (count==size);
    }
};