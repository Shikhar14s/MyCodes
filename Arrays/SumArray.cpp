#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,4,6,8,9,9,7,3,4};
    int a = sizeof(arr)/4;
    int sum = 0;
    for(int i=0; i<a; i++){
        sum += arr[i];
    }
    cout<<sum;
}