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
Node* valdel(Node* head,int k,int n){

    if(head->data==k){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* temp=head;
    if (temp->next == NULL) return head;
    for (int i = 1; i < n; i++)
    {
        temp = temp->next;
        if (temp->next->data==k)
        {
            break;
        }
    }
    
     Node* spa = temp->next->next;
        delete temp->next;
        temp->next = spa;
    return head;
}