#include<iostream>
using namespace std;

//WAP to find factorial of a number using seperate function.

int factorial(int n);

int main()
{
int n;

    cout<<"Enter a number to find its factorial:- "<<endl;
    cin>>n;

    
    cout<<"The factorial of "<<n<<" is "<<factorial(n);
return 0;
}

int factorial(int n)
{
int fact,fact1;
    if(n>=1)
    {
    
    return n*factorial(n-1);
        
    }
    else
    {
        return 1;
    }

}