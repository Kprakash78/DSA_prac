#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* back;

    Node(int data1 , Node* next1 , Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
Node* arr2DLL(int arr[],int n){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (int i = 1; i < n; i++)
    {
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        temp->back = prev;
        prev = prev->next;
    }
    return head;
}
Node* deletetail(Node* head){

    if(head == NULL || head->next == NULL){
        delete head;
        return NULL;
    }

    Node* tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }

    Node* prev = tail->back;
    prev->next = nullptr;
    delete tail;
    return head;
}
void print(Node* head){
    Node* temp =head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int arr[5]={1,4,6,7,8};
    Node*head = arr2DLL(arr,5);
    head =deletetail(head);
    print(head);
    return 0;
}