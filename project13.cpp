#include<iostream>
using namespace std;

//Find the sum of numbers till the number entered by the user

int main()
{
    int n,sum1,sum2;

    cout<<"Enter number to find sum of numbers till the entered number :-"<<endl;
    cin>>n;


    if(n>=1)
    {
        for(int i=0;i<=n;i++)
        {
            sum1+=i;
        } 
        for(int k=0;k<=n;++k)
        {
            sum2+=k;
        }    
    }

    cout<<" The sum of numbers is "<<sum1<<endl;
    cout<<" The sum of numbers is "<<sum2<<endl;
}