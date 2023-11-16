#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"nhap loop n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"nhap so"<<i<<":";
        int x;
        cin>>x;
        if(x%2!=0) continue;
        int tong=0;
        tong = tong+x;
        cout<<"tong="<<tong;
        return 0;
    }
}