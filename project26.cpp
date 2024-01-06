#include<iostream>
using namespace std;

//Product of two matrices

void read(int n[10][10],int x,int y);
void disp(int n[10][10],int x,int y);

int main()
{
int r1,c1,r2,c2;


    cout<<"Enter order of matrix 1:- "<<endl;
    cin>>r1>>c1;

    cout<<"Enter order of matrix 2:- "<<endl;
    cin>>r2>>c2;

    if(r1<1 || r2<1 || c1<1 || c2<1)
    {
        cout<<"invalid order";
    }   

    else
    {
        if(c1 != r2)
        {
            cout<<"For multiplication of matrices column of first matrix should be equal to row of second matrix";
        }
        else
        {
            int a[10][10];
            int b[10][10];
            int c[10][10];
            int r3=r2;
            int c3=c1;

            read(a,r1,c1); //reading values
            read(b,r2,c2);

            cout<<"\nThe Matrices are:-\n";

            disp(a,r1,c1);
            cout<<" and \n";
            disp(b,r2,c2);

            cout<<"The product of the matrices is:-"<<endl;

            for(int i=0;i<r3;i++)
            {
                for(int j=0;j<c3;j++)
                {
                    for(int n = 0;n<c3;n++)
                    {
                    c[i][j] = c[i][j]  + a[i][n] * b[n][j];
                    } 
                }
            }
            disp(c,r3,c3);
        }
    }

return 0;
}

void read(int n[10][10],int x,int y)
{
cout<<"Enter data row wise:- "<<endl;

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>n[i][j];
        }
    }
}

void disp(int n[10][10],int x,int y)
{
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cout<<n[i][j]<<" ";
        }
        cout<<"\n";
    }
}

