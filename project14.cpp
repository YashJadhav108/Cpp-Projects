#include<iostream>
using namespace std;

//WAP to find maximum and minimum of the total numbers entered

int main()
{
int n,i;

    cout<<"Enter total numbers:-\n";
    cin>>n;
    
        if(n<1)
        {
            cout<<"Invalid value\n";
        }
        else
        {
            int a[n];
            cout<<"Enter "<<n<<" numbers\n";
            
                for(i=0;i<n;i++)        //To read an array
                {
                    cin>>a[i];
                }
                cout<<"\n";
                cout<<"The numbers entered are:- ";

                for(i=0;i<n;i++)
                {
                    cout<<a[i]<<" ";//To display an array
                }

                    int min=a[0];
                    int max=a[0];

                        for(i=0;i<n;i++)
                        {
                            if(a[i]<min)
                            {
                                min=a[i];
                            }
                            if(a[i]>max)
                            {
                                max=a[i];
                                
                            }
                        }

                            cout<<"\nThe minimum number is "<<min<<endl;
                            cout<<"The maximum number is "<<max<<endl;
        }
return 0;
}