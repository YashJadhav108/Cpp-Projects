#include<iostream>
using namespace std;

//12)	Create a class named book, read and display details of a book.

class Book
{
    string title;
    string author;
    int yop;
    float price;

public:
    void getInfo();
    void disp();
    
};

void Book :: getInfo()
{
    cout<<"\n Enter Title : ";
    cin>>title;
    cout<<"\n Author : ";
    cin>>author;
    cout<<"\n Year of Publictation : ";
    cin>>yop;
    cout<<"\n Rate : ";
    cin>>price;
}

void Book :: disp()
{
    cout<<"\nAuthor is:- "<<author;
    cout<<"\nTitle of book is:- "<<title;
    cout<<"\nYear of publishing:- is "<<yop;
    cout<<"\nRate is:- "<<price;

}

int main()
{
    Book b;
    
    b.getInfo();
    b.disp();

return 0;
}