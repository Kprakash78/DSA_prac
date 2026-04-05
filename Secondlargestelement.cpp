#include<bits/stdc++.h>
using namespace std;
int secondlargest(int arr[],int n);
int main(){
    int arr[5]= {1,2,4,56,7};
    int seclar = secondlargest(arr,5);
    cout<<"The second largest element is:"<<seclar;
}
int secondlargest(int arr[],int n){
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>largest)
        {
            largest = arr[i];
        }        
    }
    int slargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>slargest and arr[i] != largest)
        {
            slargest = arr[i];
        }
        
    }
    return slargest;
}