#include<iostream>
using namespace std;
int main(){
    int in;
    do{
        cout<<"nhap so:";
        cin>>in;
        if(in!=120){
            cout<<in<<"stop";
        }
    }
    while(in!=120);
    return 0;
}