#include<iostream>
using namespace std;
int main(){
    int arr[5] = {5,4,6,8,9};
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<endl;
    }
    //For Reverse Printing
    for(int i=4; i>=0; i--){
        cout<<arr[i]<<endl;
    }
}