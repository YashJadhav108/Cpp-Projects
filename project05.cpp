#include<iostream>
using namespace std;

//Enter a number to revrse its digits

int main()
{
int n,r;
int x = 0;

    cout<<"Enter a number to revrse its digits:-"<<endl;
    cin>>n;

        while(n!=0)
        {
            r=n%10;
            n=n/10;
                    x = (10*x)+r;

        }

    cout<<"Reverse number is "<<x;    
return 0;
}