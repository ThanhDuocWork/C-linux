#include<iostream>

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
int arrang_array(int a[], int n){
    for(int i=0;i<n;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_index]){
                min_index=j;
            }
        }
        if(min_index!=i){
            int temp= a[min_index];
            a[min_index]=a[i];
            a[i]=temp; 
        }
    }
    out_array(a,n);
}
int max_array(int a[],int n){
    int max_index=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max_index){
            max_index=a[i];
        }
    }
    return max_index;
}
int min_array(int a[],int n){
    int min_index=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min_index){
            min_index=a[i];
        }
    }
    return min_index;
}

int main(){
    int n;
    cout<<"nhap n:";
    cin>>n;
    int a[n];
    in_array(a,n);
    out_array(a,n);
    cout<<"sap xep array:"<<endl;
    arrang_array(a,n);
    max_array(a,n);
    cout<<"max array:"<<max_array(a,n)<<endl;
    min_array(a,n);
    cout<<"min array:"<<min_array(a,n);
}