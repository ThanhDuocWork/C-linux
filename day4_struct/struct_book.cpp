#include<bits/stdc++.h>
using namespace std;

struct data_book{
    string title;
    string author;
    int age;
};
void input_book(data_book &book){
    cout<<"age: ";
    cin>>book.age;
    cin.ignore();
    cout<<"title of book: ";
    getline(cin,book.title);
    cout<<"author: ";
    getline(cin,book.author);
}
void output_book(data_book book){
    cout<<"year of publish: "<<book.age<<", name of book: "<<book.title<<", author: "<<book.author;
}
int main(){
    data_book book;
    input_book(book);
    output_book(book);
}