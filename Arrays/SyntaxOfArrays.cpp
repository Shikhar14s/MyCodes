#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter Array: ";
    for(int i=0; i<=4; i++){
        cin>>arr[i];
    }
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<endl;
    }
    arr[0] = 100;
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<endl;
    }
}