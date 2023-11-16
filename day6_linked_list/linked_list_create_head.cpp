#include<bits/stdc++.h>

using namespace std;
struct node{
    int data;
    node *link;
};
node *make_node(int x){
    node *new_node=new node;
    new_node->data=x;
    new_node->link=NULL;
    return new_node;
}
void input_node(node *head){
    node *temp=head;
    while(temp !=NULL){
        cout<<temp->data<<' ';
        temp=temp->link;
    }
}
// int count(node *head){
//     int count=0;
//     while(head !=NULL){
//         ++count;
//         head=head->link;
//     }
//     return count;
// }
void push_front(node **head,int x){
    node *new_node= make_node(x);
    new_node->link=*head;
    *head=new_node;
}
int main(){
    node *head=NULL;
    for(int i=0;i<=5;i++){
        push_front(&head,i);
    }
    input_node(head);
//    count(head);
    return 0;
}