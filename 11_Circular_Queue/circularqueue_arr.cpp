#include <iostream>
using namespace std;

#define SIZE 5

int queueArr[SIZE];
int front = -1, rear = -1;

void enqueue(int val) {
    if ((rear + 1) % SIZE == front) {
        cout << "Overflow\n";
        return;
    }

    if (front == -1) front = 0;

    rear = (rear + 1) % SIZE;
    queueArr[rear] = val;
}

void dequeue() {
    if (front == -1) {
        cout << "Underflow\n";
        return;
    }

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is empty\n";
        return;
    }

    int i = front;
    while (true) {
        cout << queueArr[i] << " ";
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();
    cout << endl;

    dequeue();
    dequeue();

    display();

    return 0;
}