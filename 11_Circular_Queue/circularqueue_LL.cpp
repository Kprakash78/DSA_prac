#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int val) {
    Node* newNode = new Node(val);

    if (front == NULL) {
        front = rear = newNode;
        rear->next = front;
        return;
    }

    rear->next = newNode;
    rear = newNode;
    rear->next = front;
}

void dequeue() {
    if (front == NULL) {
        cout << "Underflow\n";
        return;
    }

    if (front == rear) {
        delete front;
        front = rear = NULL;
        return;
    }

    Node* temp = front;
    front = front->next;
    rear->next = front;

    delete temp;
}

void display() {
    if (front == NULL) {
        cout << "Queue is empty\n";
        return;
    }

    Node* temp = front;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != front);
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();
    cout << endl;

    dequeue();
    dequeue();

    display();

    return 0;
}