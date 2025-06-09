#include<iostream>
using namespace std;
void change(int x[]){
    x[2] = 5;
}
int main(){
    int arr[5] = {5,4,6,8,9};
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<endl;
    }
    change(arr);
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<endl;
    }
}