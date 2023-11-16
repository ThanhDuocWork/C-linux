#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void count_Character_Words(const char *str,int *char_Count,int *char_word){
    *char_Count=0;
    int length_char = strlen(str);
    for(int i=0;i<length_char;i++){
        if(str[i] !=' '){
            (*char_Count)++;
        }
    }
    *char_word=0;
    if(*char_Count>0){
        (*char_word)++;
    }
    for(int i=0;i<length_char;i++){
        if(str[i]==' '&&str[i+1]!=' '){
            (*char_word)++;
        }
    }
}
int main(){
    char str[100];
    int char_word, char_Count;
    cout<<"Enter a string:";
    fgets(str,sizeof(str),stdin);

    if(str[strlen(str)-1]=='\n'){
        str[strlen(str)-1] = '\0';
    }
    count_Character_Words(str,&char_Count,&char_word);
    cout<<"Number of Characters:"<<char_Count<<endl;
    cout<<"Number of Words:"<<char_word;

    return 0;
}