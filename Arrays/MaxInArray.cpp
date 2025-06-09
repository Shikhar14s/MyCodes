#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,4,6,8,9,9,7,3,4};
    int a = sizeof(arr)/4;
    int mx = arr[0];
    for(int i=1; i<a; i++){
        if(arr[i]>mx) mx = arr[i];
        //Or We Can Use
        // mx = max(mx,arr[i]);
    }
    cout<<mx;
}