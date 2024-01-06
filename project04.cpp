#include<iostream>
using namespace std;

//Find if a number is a armstrong number
/*Armstrong number is the number in any given number base, which forms the total of the same number,
 when each of its digits is raised to the power of the number of digits in the number.*/ 

int main()
{
int n,r;
int sum=0;
 int m;

    cout<<"Find if a three digit number is an armstrong number\n";
    cout<<"Enter a number:-\n";
    cin>>n;
    m=n;
        while(n!=0)
        {
         r=n%10;
         n=n/10;
        sum+=r*r*r;
        
        }

        cout<<"The sum is = "<<sum;
            if(m == sum)
            {
                cout<<"\nThe number is an armstrong number";      
            }
            else
            {
                cout<<"\nThe number is not an armstrong number";
            }

return 0;
}