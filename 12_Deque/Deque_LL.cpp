#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = next = NULL;
    }
};

Node* front = NULL;
Node* rear = NULL;

void insertFront(int val) {
    Node* newNode = new Node(val);

    if (front == NULL) {
        front = rear = newNode;
        return;
    }

    newNode->next = front;
    front->prev = newNode;
    front = newNode;
}

void insertRear(int val) {
    Node* newNode = new Node(val);

    if (rear == NULL) {
        front = rear = newNode;
        return;
    }

    rear->next = newNode;
    newNode->prev = rear;
    rear = newNode;
}

void deleteFront() {
    if (front == NULL) {
        cout << "Underflow\n";
        return;
    }

    Node* temp = front;
    front = front->next;

    if (front == NULL) {
        rear = NULL;
    } else {
        front->prev = NULL;
    }

    delete temp;
}

void deleteRear() {
    if (rear == NULL) {
        cout << "Underflow\n";
        return;
    }

    Node* temp = rear;
    rear = rear->prev;

    if (rear == NULL) {
        front = NULL;
    } else {
        rear->next = NULL;
    }

    delete temp;
}

void display() {
    Node* temp = front;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    insertRear(10);
    insertRear(20);
    insertFront(5);
    insertRear(30);

    display();
    cout << endl;

    deleteFront();
    deleteRear();

    display();

    return 0;
}