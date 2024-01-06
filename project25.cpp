#include<iostream>
using namespace std;

//Addition and subtraction of matrices

void sum_of_matrix(int x,int y);
void sub_of_matrix(int x,int y);

int main()
{
int r1,r2,c1,c2;

    cout<<"\t\tEnter two matrices and find its sum:-\n\n ";

    cout<<"Enter number of rows and columns for matrix 1"<<endl;
    cin>>r1>>c1;

    cout<<"Enter number of rows and columns for matrix 2"<<endl;
    cin>>r2>>c2;

    if(r1<1 || c1<1 || r2<1 || c2<1)
    {
        cout<<"Invalid order";
    }
    
    else
    {
    cout<<"The matrices is of order "<<r1<<"x"<<c1<<" and "<<r2<<"x"<<c2<<endl;
        if(r1!=r2 || c1!=c2)
        {
            cout<<"The order should be same for addition of two matrices";
        }
        else
        {
            int a[10][10];
            int b[10][10];
            int z;

            cout<<"Enter '1' for addition, '2' for substraction:- ";
            cin>>z;

            switch(z)
            {

            case 1:
             {
                sum_of_matrix(r1,c1);
             }

            case 2:
            {
                sub_of_matrix(r1,c1);
            }

            }
        }

    }
return 0;
}


        void sub_of_matrix(int x,int y)
        {
            int m[x][y];
            int n[x][y];
            cout<<"Enter data of matrix 1 (row wise):- ";

            for(int i=0;i<x;i++)
            {
                for(int j=0;j<y;j++)
                {
                    cin>>m[i][j];
                }
            }

            cout<<"Enter data of matrix 2 (row wise):- ";
            

            for(int i=0;i<y;i++)
            {
                for(int j=0;j<y;j++)
                {
                    cin>>n[i][j];
                }
            }

            cout<<"The matrices are "<<endl;
            for(int i=0;i<x;i++)
            {
                for(int j=0;j<y;j++)
                {
                    cout<<m[i][j];
                    cout<<" ";
                }

                cout<<"\n";
            }
            cout<<"\n";

            for(int i=0;i<x;i++)
            {
                for(int j=0;j<y;j++)
                {
                    cout<<n[i][j];
                    cout<<" ";
                }

                cout<<"\n";
            }

            cout<<"The substraction of the matrices is:- "<<endl;
        int sum[10][10];

            for(int i=0;i<x;i++)
            {
                for(int j=0;j<y;j++)
                {
                    sum[i][j] = m[i][j] - n[i][j];
                    cout<<sum[i][j];
                    cout<<" ";
                }
                cout<<"\n";
            }
        }

void sum_of_matrix(int x,int y)
{
    int m[x][y];
    int n[x][y];
    cout<<"Enter data of matrix 1 (row wise):- ";

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>m[i][j];
        }
    }

    cout<<"Enter data of matrix 2 (row wise):- ";

    for(int i=0;i<y;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>n[i][j];
        }
    }

    cout<<"The matrices are "<<endl;
     for(int i=0;i<x;i++)
     {
        for(int j=0;j<y;j++)
        {
            cout<<m[i][j];
            cout<<" ";
        }

        cout<<"\n";
     }
     cout<<"\n";

     for(int i=0;i<x;i++)
     {
        for(int j=0;j<y;j++)
        {
            cout<<n[i][j];
            cout<<" ";
        }

        cout<<"\n";
     }

    cout<<"The sum of the matrices is:- "<<endl;
 int sum[x][y];

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            sum[i][j] = m[i][j] + n[i][j];
            cout<<sum[i][j];
            cout<<" ";
        }
        cout<<"\n";
    }
}