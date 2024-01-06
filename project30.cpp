#include <iostream>
using namespace std;

/*cout<<"Enter customer id number :- "<<endl;
    cin>>x.cid;*/

struct customer
{
    int cid;
    string name;
    int no;
};

void read(struct customer &x)
{
    cout<<"Enter customer id number :- "<<endl;
    cin>>x.cid;
    cout<<"Enter customer name :- "<<endl;
    cin>>x.name;
    cout<<"Enter customer phone number :- "<<endl;
    cin>>x.no;
}
void disp(struct customer &y)
{
    cout<<"The customer ID number is :- "<<y.cid<<endl;
    cout<<"The customer name is :- "<<y.name<<endl;
    cout<<"The customer phone number is :- "<<y.no<<endl;
}

int main()
{
customer a[2];

    for(int i=0;i<2;i++)
    {
        cout<<"Enter details of customer "<<i+1<<" :-"<<endl;
        read(a[i]);
    }

    for(int i=0;i<2;i++)
    {
        cout<<"Details of customer "<<i+1<<" :-"<<endl;
        disp(a[i]);
    }

return 0;
}