#include<iostream>
using namespace std;

void hello(){
    cout<<"chao mung ban den voi store"<<endl;
}
int pass_word(){
    int pass;
    do{
        cout<<"log in account!!:";
        cin>>pass;
    }
    while(pass!=2610);
    return pass;
}
int orther_food(){
//    char N,H,R;
    char food;
    cout<<"menu food(N,H,R):";
    cin>>food;
    switch(food){
        case 'H':
        cout<<"you select Hamburger";
        break;
        case 'R':
        cout<<"you select Rice";
        break;
        case 'N':
        cout<<"you select Noodle"<<endl;
        cout<<"please pick 1 or 2 (noodle):";
        int pick_N;
        cin>>pick_N;
        if(pick_N==1){
            cout<<"you select Pho Bo";
        }
        else if(pick_N){
            cout<<"you select Pho Ga";
        }
        else{
            cout<<"data incorrect";
            return false;
        }
        break;
        default:
            cout<<"data incorrect";
            return false;
        cout<<endl;
    }
    cout<<endl;
    return true;
}
void waiting(){
    cout<<"please wait setup food for you"<<endl;
    for(int i=0;i<=5;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
    cout<<endl;
    }
    cout<<"food already!! thank you purchased!!";
}
int main(){
    hello();
    pass_word();
    if(orther_food()==true){
        waiting();
    }
    else{
        cout<<"wellcome!! see you late";
    }
    return 0;
}