#include <iostream>
using namespace std;

#define SIZE 5

int dq[SIZE];
int front = -1, rear = -1;

void insertFront(int val) {
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1)) {
        cout << "Overflow\n";
        return;
    }

    if (front == -1) {
        front = rear = 0;
    } else if (front == 0) {
        front = SIZE - 1;
    } else {
        front--;
    }

    dq[front] = val;
}

void insertRear(int val) {
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1)) {
        cout << "Overflow\n";
        return;
    }

    if (front == -1) {
        front = rear = 0;
    } else if (rear == SIZE - 1) {
        rear = 0;
    } else {
        rear++;
    }

    dq[rear] = val;
}

void deleteFront() {
    if (front == -1) {
        cout << "Underflow\n";
        return;
    }

    if (front == rear) {
        front = rear = -1;
    } else if (front == SIZE - 1) {
        front = 0;
    } else {
        front++;
    }
}

void deleteRear() {
    if (front == -1) {
        cout << "Underflow\n";
        return;
    }

    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = SIZE - 1;
    } else {
        rear--;
    }
}

void display() {
    if (front == -1) {
        cout << "Deque is empty\n";
        return;
    }

    int i = front;
    while (true) {
        cout << dq[i] << " ";
        if (i == rear) break;
        i = (i + 1) % SIZE;
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