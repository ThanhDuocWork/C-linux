#include<iostream>
using namespace std;
int main(){
    char kytu;
    cout<<"nhap mon an ban yeu thich gom:(H N O):";
    cin>>kytu;
    switch(kytu){
        case'H':
            cout<<"ban orther Hambuger!!"<<endl;
            break;
        case'N':
            cout<<"ban orther Noodle!!"<<endl;
            break;
        case 'O':
            cout<<"ban orther nuoc ep!!"<<endl;
            cout<<"moi ban lua chon nuoc ep!!"<<endl;
            int O;
            cin>>O;
            if(O==1){
                cout<<"ban dat nuoc cam";
            }
            else if(O==2){
                cout<<"ban dat nuoc tao";
            }
            else if(O==3){
                cout<<"ban dat nuoc dau";
            }
            else{
                cout<<"gia tri nhap khong hop le";
            }
            break;
        default:
            cout<<"gia tri nhap khong hop le";       
    }
}