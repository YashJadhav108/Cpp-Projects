#include<iostream>
#include<cmath>
using namespace std;
//WAP to Find Standard deviation of values entered
//Formula = 

int main()
{
int i,n;
float sum=0;
float avg;
float SD;
float sumdiff=0;

    cout<<"Enter number of values:- "<<endl;
    cin>>n;

    if (n<1)
    {
        cout<<"Invalid Entry";
    }
    else
    {
        float a[n];
        float diff[n];
        cout<<"Enter "<<n<<" values to find its standard deviation"<<endl;
           
            for(i=0;i<n;i++)
            {
                cin>>a[i];
            }

            for(i=0;i<n;i++)
            {
                sum+=a[i];
            }
        
        avg=(sum/n);

            for(i=0;i<n;i++)
            {
                diff[i]=a[i]-avg;
            }
        
            for(i=0;i<n;i++)
            {
                sumdiff+=pow(diff[i],2);
            }


        for(i=0;i<n;i++)
            {
                SD=sqrt(sumdiff/(n-1));
            }
    
    cout<<"The standard deviation is "<<SD;

    }
}