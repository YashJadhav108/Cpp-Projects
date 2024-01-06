#include<iostream>
using namespace std;

/*WAP to read and display the information of the book
The info includes author,title ,price and year of publishing
diplay the details of the most expensive book*/

void getinfo(struct book &x);
void disp(struct book &y);

struct book
{
    string author;
    string title;
    float price;
    int yop;
};

int main()
{
int n;

    cout<<"Enter number of books for details to be entered:- "<<endl;
    cin>>n;

book a[n];

    for(int i=0;i<n;i++)
    {
        getinfo(a[i]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<"\n\nDetails of book "<<i+1<<" is:-"<<endl;
        disp(a[i]);
    }

float b[n] = book.price;

//To find maximum of 
float max = b[0].price;
int c=0;
    for(int i=1;i<n;i++)
    {
        if(b[i].price>max)
        {
            max = b[i].price;
            c=i;
        }
    }

        cout<<"The most expensive book is \n"<<a[c];


return 0;
}

void getinfo(struct book &x)
{
    cout<<"Enter details of the book:- "<<endl;

    cout<<"Enter Title:- "<<endl;
    cin>>x.title;

    cout<<"Enter Author:- "<<endl;
    cin>>x.author;


    cout<<"Enter Price:- "<<endl;
    cin>>x.price;

    cout<<"Enter Year of Publishing :- "<<endl;
    cin>>x.yop;
    cout<<endl<<endl;
}

void disp(struct book &y)
{
    cout<<"Title:- "<<y.title<<endl;
    cout<<"Author:- "<<y.author<<endl;
    cout<<"Price:- "<<y.price<<endl;
    cout<<"Year of publishing:- "<<y.yop<<endl;
}

