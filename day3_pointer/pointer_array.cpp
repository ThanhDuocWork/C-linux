#include<iostream>
using namespace std;
int test1(int n){
    n+=100;
    return n;
}
int test2(int n, int m){
    int result1=0; 
    result1=n+m;
    return result1;
}

int main(){
    int n=200;
    n=test1(n);
    cout<<"n="<<n<<endl; 
    int m=300;
//    int result;
//    result=test2(n,m);
    test2(n,m);
//    cout<<"result test2:"<<result;
    cout<<"result test2:"<<test2(n,m);
}