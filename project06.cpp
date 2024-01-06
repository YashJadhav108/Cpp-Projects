#include<iostream>
using namespace std;

//WAP to find if number entered is a prime number or not

int main()
{
int n,i;
int c=0;

cout<<"Enter a number to find if it is a prime number:-"<<endl;
cin>>n;

    for(i=2;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            
            cout<<"The number is not prime";
            c=1;
            break; 
        }
       
    }
    if(c==0)
    {
        cout<<"The number is prime";
    }



return 0;
}