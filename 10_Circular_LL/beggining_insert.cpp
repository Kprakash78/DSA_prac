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

Node* head = NULL;

Node* arr2LL(int arr[],int n){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < n; i++)
    {
       Node* temp = new Node(arr[i]);
       mover->next = temp;
       mover = mover->next;
    }
    mover->next = head; 
    return head;
}

void traverse() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

void insertBegin(int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }

    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    newNode->next = head;
    temp->next = newNode;
    head = newNode;
}

int main() {
    insertBegin(10);
    insertBegin(20);
    insertBegin(30);

    traverse();

    return 0;
}