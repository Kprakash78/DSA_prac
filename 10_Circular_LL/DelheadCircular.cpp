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

Node* arr2CLL(int arr[], int n) {
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < n; i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    // make it circular
    mover->next = head;

    return head;
}

Node* deleteHead(Node* head) {
    if (head == NULL) {
        cout << "List is empty\n";
        return NULL;
    }

    if (head->next == head) {
        delete head;
        return NULL;
    }

    Node* last = head;
    while (last->next != head) {
        last = last->next;
    }

    Node* temp = head;
    head = head->next;
    last->next = head;

    delete temp;

    return head;
}

void display(Node* head) {
    if (head == NULL) return;

    Node* temp = head;
    do {
        cout << temp->data ;
        temp = temp->next;
    } while (temp != head);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    Node* head = arr2CLL(arr, 5);

    cout << "Original List:\n";
    display(head);

    head = deleteHead(head);

    cout << "\nAfter Deleting Head:\n";
    display(head);

    return 0;
}