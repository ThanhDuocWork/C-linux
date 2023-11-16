#include<iostream>
using namespace std;
int main(){
    int a=300,b=200;
    int tong = a+b;
    int hieu =a-b;
    int tich=a*b;
    int thuong=a/b;
    int du=a%b;
    cout<<"tong:"<<tong<<", hieu:"<<hieu<<", tich"<<tich<<", thuong"<<thuong<<", du"<<du<<endl;
    int i=300, j=200;
    double thuongdu=(float)i/j;
    cout<<"thuong du:"<<thuongdu<<endl;
    int k=1000000,h=20000000;
    long long tong_dd=k*(long long)h;
    cout<<"tong_dd:"<<tong_dd;
    return 0;
}