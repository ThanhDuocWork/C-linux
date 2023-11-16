// #include<iostream>
// using namespace std;

// void for_2(int n, int m){
//     for(int i=0;i<n;i++){
//         cout<<"*";
//         for(int j=i;j<m;j++){
//             cout<<"*";
//         }
//     cout<<endl;    
//     }

// }
// int main(){
//     int n,m;
//     cout<<"nhap n:";
//     cin>>n;
//     cout<<"nhap m:";
//     cin>>m;
//     for_2(n,m);
// }
#include<iostream>
using namespace std;
int for_2(int n){
    for(int i=1;i<n;i++){
        for(int j=1;i<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"nhap hang cho tam giac *:";
    cin>>n;
    for_2(n);
}