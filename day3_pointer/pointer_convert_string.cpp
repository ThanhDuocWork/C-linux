#include<iostream>
#include<cstring>
using namespace std;

void data_string (char *str){
    int leng=strlen(str);
    char *start=str;
    char *end=str+leng-1;
    while(start < end){
        char temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main(){
    char str[100];
    char reject[]="\n";
    cout<<"nhap vao chuoi:";
    fgets(str,sizeof(str),stdin);
//    cin>>str;
    str[strcspn(str,reject)]='\0';
    data_string(str);
    cout<<"chuoi sau khi convert:"<<str;
}