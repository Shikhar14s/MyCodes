#include<iostream>
using namespace std;
int main(){
    int a[] = {5,4,6,8,9,9,7,3,4};
    int n = sizeof(a)/4;
    int b[n];
    for(int i=0; i<n; i++){
        b[i] = a[n-1-i];
        cout<<b[i]<<" ";
    }
}