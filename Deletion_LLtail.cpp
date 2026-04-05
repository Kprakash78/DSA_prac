#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;

    Node(int data1, Node* next1){
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
for (int i = 1; i < n; i++)
{
    Node* temp = new Node(arr[i]);
    mover->next=temp;
    mover = mover->next;
}
return head;
}

Node* deletetail(Node* head){
    if (head==NULL or head->next == NULL) 
    {
        return NULL;
    }
    Node* temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
     delete temp->next;
     temp->next = nullptr;

    return head;
}
    int main(){
       int arr[5]={1,2,4,5,6};
       Node* head = arr2LL(arr,5);
       Node* tail = deletetail(head);
       Node* temp = head;
       while(temp->next != NULL){
       temp = temp->next;
       }
       cout << temp->data;
    }
