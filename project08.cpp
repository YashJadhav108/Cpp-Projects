#include<iostream>
using namespace std;

//function for prime number
//'k' is formal parameter 'n' is actual paramete
//Find all prime numbers between 0 to 10000
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
int i;
    for(i=1;i<=10000;i++)
    {
    prime(i);
    }
return 0;
}