#include<bits/stdc++.h>
using namespace std;

class Stack{
    
    int topIndex = -1;   
    int st[10];

public:  

    void push(int x){
        if(topIndex == 9){
            cout << "Stack Overflow\n";
            return;
        }
        topIndex++;
        st[topIndex] = x;
    }

    int top(){
        if(topIndex == -1){
            return -1;
        }
        return st[topIndex];
    }

    void pop(){
        if(topIndex == -1){
            cout << "Stack Underflow\n";
            return;
        }
        topIndex--;
    }

    int size(){
        return topIndex + 1;
    }
};
int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top: " << s.top() << endl;
    cout << "Size: " << s.size() << endl;

    s.pop();

    cout << s.top() << endl;

    return 0;
}