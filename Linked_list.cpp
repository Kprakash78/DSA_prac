#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data =data1;
        next = next1;

    }
    
    
};
int main(){
        int arr[] ={1,2,34 ,56};
        Node* y =  new Node(arr[0],nullptr);
        cout<<y->data<<endl;
        cout<<y->next;
        
    }
