#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
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
        for (int i = 1; i <n ; i++)
        {
           Node* temp= new Node(arr[i]);
           mover->next = temp;
           mover = mover->next;
        }
        return head;    
    }
int main(){
    int arr[5]={3,2,34,56,7};
    Node* head = arr2LL(arr,5);
    // cout<<head->data;
    Node* temp = head;
    int count = 0;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
        count++;
    }
    cout<<endl;
    cout<<count;
}