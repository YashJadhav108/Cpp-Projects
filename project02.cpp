#include<iostream>
using namespace std;

/* WAP to print the sum of n numbers entered by 
the user until the user enters 40*/

int main()
{
int n;
int sum = 0;

    cout<<"Enter numbers to add them ";
    cout<<"To finish addition add 40"<<endl;
    cout<<"Enter number:-"<<endl;
    cin>>n;

    while(n!=40)
    {
        sum+=n;
        cout<<"\nEnter another number:-\n";
        cin>>n;
    }
    cout<<"\nTotal="<<sum;



return 0;
}