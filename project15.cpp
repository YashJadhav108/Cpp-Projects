#include<iostream>
using namespace std;

//WAP to Find sum and average of all the numbers entered.

int main()
{
int n,i;
int sum=0;
float avg;

    cout<<"Enter total number of which average is to be found:-"<<endl;
    cin>>n;

        if(n<1)
        {
            cout<<"Invalid Entry";
        }

        else
        {
            int a[n];

    cout<<"Enter "<<n<<" numbers:-"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

//Find sum
        for(i=0;i<n;i++)
        {
            sum+=a[i];
        }
avg=(sum/n);

    cout<<"The sum of all the numbers is "<<sum<<endl;
    cout<<"The average of all numbers is "<<avg;

        }

return 0;
}