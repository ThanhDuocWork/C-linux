#include<bits/stdc++.h>

using namespace std;
struct node{
    int data;
    node *link;
};
node *make_node(int i){
    node *new_node= new node;
    new_node->data=i;
    new_node->link=NULL;
    return new_node;
}
void input_node(node *head){
    node *temp= head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->link;
    }
}
void node_end(node **head, int i){
    node *new_node=make_node(i);
    if(*head ==NULL){
        *head = new_node;
        return;
    }
    node *temp= *head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=new_node;
}
int main(){
    node *head=NULL;
    for(int i=1;i<=10;i++){
        node_end(&head,i);
    }
    input_node(head);
    return 0;
}