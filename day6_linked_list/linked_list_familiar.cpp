#include<bits/stdc++.h>
using namespace std;

struct node_f{
    int data;
    node_f *link;
};
int main(){
    node_f *head=NULL;
    node_f *second=NULL;
    node_f *third=NULL;
    head = new node_f;
    second = new node_f;
    third = new node_f;
    head->data=45;
    second->data=60;
    third->data=99;

    head->link=second;
    second->link=third;
    third->link=NULL;
    cout<<"head: "<<head->data<<endl;
    cout<<"head: "<<second->data<<endl;
    cout<<"head: "<<third->data<<endl;

    delete head,second,third;
    return 0;
}