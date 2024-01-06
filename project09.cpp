#include<iostream>
using namespace std;

//WAP to print Fibonacci sequence till number of terms entered by user.

int main()
{
int n,n1=0,n2=1,n3,i;

    cout<<"Enter number of terms in fibonacci sequence"<<endl;
    cin>>n;

    cout<<"Fibonacci Series:-"<<n1<<" "<<n2<<" ";

        for(i=2;i<=n;i++)
        {   
            n3=n1+n2;
            cout<<n3<<" ";

            n1=n2;
            n2=n3;

        }
return 0;
}