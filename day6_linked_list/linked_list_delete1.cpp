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
void delete_node(node **head){
    delete *head;
}
void node_create(node **head, int i){
    node *new_node=make_node(i);
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
    node *new_node=make_node(i);
    node *temp=*head;
    if(*head==NULL){
        *head=new_node;
    }
    int position;
    cout<<"Enter insert position : ";
    cin>>position;
    if(position<=0){
        cout<<"Invalid insert position!!"<<endl;
        return;
    }
    for(int j=1;j<position-1 && temp!=NULL;j++){
        temp=temp->link;
    }
    if(temp==NULL){
        cout<<"OverLoad!!"<<endl;
        return;
    }
    new_node->link=temp->link;
    temp->link=new_node;
}
void delete_head(node **head){
    node *temp=*head;
    if(*head==NULL){
        cout<<"No Node in List!!"<<endl;
        return;
    }
    *head=(*head)->link;
    delete temp;
}
void delete_end(node **head){
    if(*head==NULL){
        cout<<"No Node in List!!"<<endl;
        return;
    }
    node *temp=*head;
    if(temp->link==NULL){
        *head=NULL;
        delete temp;
        cout<<"Delete list have one node!!"<<endl;
        return;
    }
    while(temp->link->link!=NULL){
        temp=temp->link;
    }
    node *last=temp->link;
    temp->link=NULL;
    delete last;
}
void delete_mid(node **head){
    node *temp=*head;   
    if(*head==NULL){
        cout<<"List empty!!"<<endl;
        return;
    }
    if(temp->link==NULL){
        *head=NULL;
        delete temp;
        cout<<"Delete list have one node!!"<<endl;
        return;
    }
    int position;
    cout<<"Enter position delete: ";
    cin>>position;
    if(position==0){
        delete_head(head);

    }
    for(int j=1;j<position-1 && temp!=NULL;j++){
        temp=temp->link;
    }
    if(temp==NULL||temp->link==NULL){
        //vuot qua so luong node xoa
        cout<<"Invalid position. Cannot delete at this position"<<endl;
        return;
    }
    node *node_to_delete=temp->link;
    temp->link=node_to_delete->link;
    delete node_to_delete;
}
void node_printf(node *head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->link;
    }
    cout<<endl;
}
void select(node *head){
        while(1){
        cout<<"------------------------------"<<endl;
        cout<<"1. Them vao dau"<<endl;
        cout<<"2. Them vao cuoi"<<endl;
        cout<<"3. Them vao giua"<<endl;
        cout<<"4. Xoa dau"<<endl;
        cout<<"5. Xoa cuoi"<<endl;
        cout<<"6. Xoa giua"<<endl;
        cout<<"7. Duyet"<<endl;
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
            cout<<"Delete Node Head"<<endl;
            delete_head(&head);
        }
        else if(lc==5){
            cout<<"Delete Node End"<<endl;
            delete_end(&head);
        }
        else if(lc==6){
            cout<<"Delete Node Mid"<<endl;
            delete_mid(&head);
        }
        else if(lc==7){
            cout<<"Duyet linked list: ";
            node_printf(head);
        }
        else{
            cout<<"gia tri nhap khong hop le!!";
            break;
        }        
    }
}
int main(){
    node *head=NULL;
    select(head);
    delete(head);
    return 0;
}