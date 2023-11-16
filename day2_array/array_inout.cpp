#include<iostream>
using namespace std;
int in_array(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<"phan tu mang "<<i+1<<":";
        cin>>a[i];
    }
}
int out_array(int a[],int n){
    cout<<"phan tu mang:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}
int main(){
    int n;
    int a[100];
    cout<<"nhap mang(n):";
    cin>>n;
    in_array(a,n);
    out_array(a,n);
}
