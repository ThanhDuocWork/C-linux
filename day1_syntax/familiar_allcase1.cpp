#include<iostream>
using namespace std;
void n_and_m(float &n, float &m);
void hello_program(){
    cout<<"welcome to the program!!"<<endl;
}
int choise(){
        cout<<"1. Print numbers using for loop"<<endl;
        cout<<"2. Check a number using switch_case"<<endl;
        cout<<"3. Perform an operation using if_else"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choise:";
        int choise;
        cin>>choise;
        return choise;
}
void case1(){
    int n=5;
    cout<<"you select value (case1):";
    for(int i=0;i<=n;i++){
        cout<<i<<"\t";
    }
    cout<<endl;
}
void case2(){
    int case2;
    cout<<"plese pick number from 1 to 3:";
    cin>>case2;
    switch(case2){
        case 1:
        cout<<"you choise number 1";
        break;
        case 2:
        cout<<"you choise number 2";
        break;
        case 3:
        cout<<"you choise number ";
        break;
        default:
        cout<<"Invalid input!";
        break;
    }
    cout<<endl;
}
void case3(){
    int case3;
    float n=0, m=0, result=0;
    cout<<"Select an operation!!!"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"Enter operation choice: ";
    cin>>case3;
    if(case3 <1 || case3>4){
        cout << "Invalid choice! Please try again." << endl; 
        return;
    }
    n_and_m(n,m);
    if(case3 == 1){
        result=n+m;  
        cout<<"you choise Addition!! result= n+m = "<<result<<endl;
    }
    else if(case3 == 2){
        result=n-m;
        cout<<"you choise Subtraction!! result= n-m = "<<result<<endl;
    }
    else if(case3 == 3){
        result=n*m;
        cout<<"you choise Multipication!! result= n*m = "<<result<<endl;
    }
    else if(case3 == 4){
        if(m!=0){
            result=n/m;
            cout<<"you choise Division!! result= n/m = "<<result<<endl;
        }
        else{
            cout << "Division by zero is not allowed!" << endl;
        }
    }
    else{
        cout << "Invalid choice! Please try again." << endl; 
        return;
    }
}
void exit_program(){
    cout<<"Exit the program!! bye thank you for all";
}
void n_and_m(float &n, float &m){
        cout<<"n=";
        cin>>n;
        cout<<"m=";
        cin>>m;
}
int main(){
    hello_program();
    int select;
    do{
        select=choise();
        if(select==1){
            case1();
        }
        else if(select==2){
            case2();
        }
        else if(select==3){
            case3();
        }
        else if(select==4){
            exit_program();
        }
        else{
            cout << "Invalid choice! Please try again." << endl;
        }

        //     switch(select){
        //     case 1:
        //     case1();
        //     break;

        //     case 2:
        //     case2();
        //     break;

        //     case 3:
        //     case3();
        //     break;
            
        //     case 4:
        //     exit_program();
        //     break;
        //     default:
        //         printf("Invalid choice! Please try again.\n");
        // }
    }
    while(select!=4);
    return 0;
}
