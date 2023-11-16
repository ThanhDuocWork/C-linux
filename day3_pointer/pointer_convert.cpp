#include<iostream>
#include<cstring>
using namespace std;

int in_array(int a[],int n){
    for(int i=0; i<n;i++){
        cout<<"nhap gia tri phan tu array "<<i+1<<":";
        cin>>a[i];
    }
}
int out_array(int a[],int n){
    cout<<"gia tri cua phan tu array:";
    for(int i=0; i<n;i++){
        cout<<a[i]<<"\t";
    } 
    cout<<endl;   
}
int convert_array(int a[], int n){
    int start = 0;
    int end = n-1;
//    in_array(a,n);
    while(start<end){
        int temp = a[start];
        a[start] = a[end];
        a[end] =temp;
        start++;
        end--;
    }
    out_array(a,n);
}
int main(){
    int n;
    cout<<"nhap n:";
    cin>>n;
    int a[n];
    in_array(a,n);
    out_array(a,n);
    cout<<"gia tri cua array sau khi convert:"<<endl;
    convert_array(a,n);
    return 0;
}