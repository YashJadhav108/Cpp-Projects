#include<iostream>
using namespace std;

//function for prime number
//'k' is formal parameter 'n' is actual parameter
void prime(int k)
{
int c=0;
    for(int i=2;i<=k/2;i++)
    {
        if(k%i == 0)
        {
            c=1;
            cout<<k<<" is not a prime number";
            break;
        }
    }
    if(c==0)
    {
        cout<<k<<" is a prime number";
    }
} 

int main()
{
int n;
    cout<<"Enter a number to find if its prime:-\n";
    cin>>n;

    prime(n);
return 0;
}
