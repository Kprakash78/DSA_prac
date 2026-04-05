#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;

    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* arr2LL(int arr[],int n){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 0; i < n; i++)
    {
       Node* temp = new Node(arr[i]);
       mover->next= temp;
       mover = mover->next;
    }
    return head;
}
Node* Kdel(Node* head,int k){

    if (head == NULL) return NULL;

    if (k == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    for (int i = 1; i < k-1; i++)
    {
         temp = temp->next;
    }

    if (temp->next == NULL) return head;

    Node* spa = temp->next->next;
        delete temp->next;
        temp->next = spa;

    return head;
};
