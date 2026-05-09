#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data =data1;
        next = next1;
    }
    Node(int data1){
        data =data1;
        next = nullptr;
    }  
};
class LL_stack{
public:
    Node* topnode;
    int size=0;

    void push(int x){
        Node* temp = new Node(x);
        temp->next = topnode;
        topnode = temp;
        size = size+1;
    }
    void pop(){
        Node* temp = topnode;
        topnode =topnode->next;
        delete temp;
        size -= 1;
    }
    int top(){
        return topnode->data;   
    }
    int LLsize(){
        return size;
    }
};
int main(){
    LL_stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top: " << s.top() << endl;

    s.pop();

    cout << "Top after pop: " << s.top() << endl;

    

    return 0;
}
