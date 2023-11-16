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
int sum_array(int a[], int n){
    int sum=0;
    for(int i=0; i<n;i++){
        sum=sum+a[i];
    }
    return sum; 
}
float average_array(int a[],int n){
    float ave=0;
    int sum1=sum_array(a,n);
        for(int i=1; i<=n;i++){
            ave=sum1/n;
    }
    return ave; 
}
int main(){
    int n;
    cout<<"nhap n:";
    cin>>n;
    int a[n];
    in_array(a,n);
    out_array(a,n);
    sum_array(a,n);
    cout<<"tong cua array:"<<sum_array(a,n)<<endl;
    average_array(a,n);
    cout<<"trung binh cua array:"<<average_array(a,n);
    return 0;
}