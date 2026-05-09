#include<bits/stdc++.h>
using namespace std;

class MyQueue {
    
    int capacity = 10;
    int curr_size = 0;
    int start = -1;
    int end = -1;
    int q[10];

public:

    void push(int x){
        if(curr_size == capacity){
            cout << "Queue is full\n";
            return;
        }

        if(curr_size == 0){
            start = 0;
            end = 0;
        }
        else{
            end = (end + 1) % capacity;
        }

        q[end] = x;
        curr_size++;
    }

    int pop(){
        if(curr_size == 0){
            cout << "Queue is empty\n";
            return -1;
        }

        int element = q[start];

        if(curr_size == 1){
            start = end = -1;
        }
        else{
            start = (start + 1) % capacity;
        }

        curr_size--;
        return element;
    }

    int front(){
        if(curr_size == 0){
            cout << "Queue is empty\n";
            return -1;
        }
        return q[start];
    }

    int size(){
        return curr_size;
    }
};
int main(){
    MyQueue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl;

    q.pop();

    cout << "Front after pop: " << q.front() << endl;

    q.push(40);
    q.push(50);

    cout << "Size: " << q.size() << endl;

    return 0;
}