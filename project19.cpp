#include<iostream>
using namespace std;

//Display ascending order of numbers entered by user using bubble sorting

int main()
{
int n;
    cout<<"Enter the total numbers to arrange them in ascending order"<<endl;
    cin>>n;
int a[n];
    

    if(n<1)
    {
        cout<<"Invalid total numbers";
    }

    else
    {
    cout<<"Enter "<<n<<" numbers"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        cout<<"The entered numbers are:-"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<" "<<a[i]<<" ";
    }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    int c = a[j];
                    a[j]=a[j+1];
                    a[j+1]=c;
                }

            }
        }

    cout<<"The numbers in ascending order are:-"<<endl;

        for(int i=0;i<n;i++)
        {
            cout<<" "<<a[i]<<" ";
        }
    }     
}