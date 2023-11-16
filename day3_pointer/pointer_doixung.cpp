#include<iostream>
#include<cstring>

using namespace std;
int data_string(char *str){
    int leng=strlen(str);
    char *start=str;
    char *end=str+leng-1;
    while(start<end){
        if(*start != *end){
            return false;
        }
        start++;
        end--;
    }
}
int main(){ 
    char str[100];
    cout<<"nhap vao chuoi:";
    cin.getline(str,100);
    data_string(str);
    if(data_string(str)==1){
        cout<<"chuoi doi xung";
    }
    else {
        cout<<"chuoi khong doi xung";
    }
    return 0;
}