#include<iostream>
using namespace std;

int main(){
    int a[10];
    int size = 5;
    int k, x;
    cout<<"Enter elements of array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>a[i];
    }
    cout<<"Enter the index number to insert element: ";
    cin>>k;
    cout<<"Enter the element to insert: ";
    cin>>x;
    for(int i=size; i>k; i--){
        a[i] = a[i-1];
    }
    a[k]=x;
    size++;
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Enter the index number to delete the element: ";
    cin>>k;
    for(int i=k; i<size-1; i++){
        a[i] = a[i+1];
    }
    size--;
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
}