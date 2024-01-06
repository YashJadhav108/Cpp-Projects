#include<iostream>
using namespace std;

//WAP to read and display information of the student
//Info includes rollno,name,gender and enrollment no

struct student
{
    int rno;
    string name;
    string enroll;
    string g;
};

void getinfo(struct student &x);
void disp(struct student &y);

int main()
{
struct student p,q;

    cout<<"Enter details of student 1:- "<<endl;
        getinfo(p);

    cout<<"Enter details of student 1:- "<<endl;
        getinfo(q);

    cout<<"\n\n";
    cout<<"Details of student 1:- "<<endl;
    disp(p);
    
    cout<<"\n\n";
    cout<<"Details of student 2:- "<<endl;
    disp(q);


return 0;
}

void getinfo(struct student &s)
{
    cout<<"\nEnter Name:- "<<endl;
    cin>>s.name;
    cout<<"Enter Enrollment No:- "<<endl;
    cin>>s.enroll;
    cout<<"Enter Roll no :- "<<endl;
    cin>>s.rno;
    cout<<"Enter Gender:- "<<endl;
    cin>>s.g;
}
void disp(struct student &y)
{
    cout<<"Name:- "<<y.name<<endl;
    cout<<"Roll No:- "<<y.rno<<endl;
    cout<<"Gender:- "<<y.g<<endl;
    cout<<"Enrollment No:- "<<y.enroll<<endl;

}