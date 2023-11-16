#include<bits/stdc++.h>

using namespace std;
struct node{
    int data;
    node *link;
};
node *make_node(int i){
    node *new_node=new node;
    new_node->data=i;
    new_node->link=NULL;
    return new_node;
}
void input_node(node *head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->link;
    }
    cout<<endl;
}
void node_create(node **head, int i){
    node *new_node = make_node(i);
//    node *temp=*head;
    new_node->link=*head;
    *head=new_node;
}
void node_end(node **head, int i){
    node *new_node=make_node(i);
    node *temp=*head;
    if(*head==NULL){
        *head=new_node;
        return;
    }
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=new_node;
}
void node_insert(node **head, int i){
    int position;
    cout << "Nhap vi tri muon chen: ";
    cin >> position;
    if (position <= 0) {
        cout << "Vi tri khong hop le." << endl;
        return;
    }
    node *temp = *head;
    node *new_node = make_node(i);
    // Di chuyen den vi tri chen
    for (int j = 1; j < position - 1 && temp != NULL; j++) {
        temp = temp->link;
    }
    if (temp == NULL) {
        cout << "Vi tri chen vuot qua so luong node." << endl;
        return;
    }
    new_node->link = temp->link;
    temp->link = new_node;
}
void select(node *head){
        while(1){
        cout<<"------------------------------"<<endl;
        cout<<"1. Them vao dau"<<endl;
        cout<<"2. THem vao cuoi"<<endl;
        cout<<"3. Them vao giua"<<endl;
        cout<<"4. Duyet"<<endl;
        cout<<"------------------------------"<<endl;
        int lc;
        cin>>lc;
        if(lc==1){
            cout<<"Nhap them vao dau: ";
            int i;
            cin>>i;
            node_create(&head,i);
        }
        else if(lc==2){
            cout<<"Nhap them vao cuoi: ";
            int i;
            cin>>i;
            node_end(&head,i);            
        }
        else if(lc==3){
            cout<<"Nhap them vao giua: ";
            int i;
            cin>>i;
            node_insert(&head,i);            
        }
        else if(lc==4){
            cout<<"Duyet linked list: ";
            input_node(head);
        }
        else{
            cout<<"gia tri nhap khong hop le!!";
            break;
        }        
    }
}
void delete_node(node **head) {
    node *temp = *head;
    node* nextNode;

    while (temp != NULL) {
        nextNode = temp->link;// Lưu node kế tiếp
        delete temp;  // Giải phóng bộ nhớ của node hiện tại
        temp = nextNode;  // Chuyển tới node kế tiếp
    }
}
int main(){
    node *head=NULL;
    select(head);
    delete_node(&head);
    return 0;
}