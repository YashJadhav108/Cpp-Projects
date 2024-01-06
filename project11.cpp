#include<iostream>
using namespace std;

//WAP to find HCF of two numbers.
void HCF;

int main()
{
int a,b;

    cout<<"Enter two numbers to find its HCF\n";
    cout<<"Enter the first number\n";
    cin>>a;
    cout<<"Enter the second number\n";
    cin>>b;

    HCF(a,b);

return 0;
}

void HCF(int n,int m)
{

int c,d;
    for(int i;i<=n;i++)
    {
    cout<<"Factors of n are:-\n";
        if(i%n==0)
        {
            cout<<i;
            c=i;
        }
        else
        {
            continue;
        }
    }
     for(int j;j<=m;j++)
    {
    cout<<"Factors of m are:-\n";
        if(j%m==0)
        {
            cout<<j;
            d=j;
        }
        else
        {
            continue;
        }
    int same = c=d;
    cout<<same;
    }
}