#include<iostream>
using namespace std;

//create a two-dimensional array (matrix), read and display the elements.
//4 marks in end sem compulsory

int main()
{
int rows,columns;

    cout<<"Enter number of rows:- "<<endl;
    cin>>rows;

    cout<<"Enter number of columns:- "<<endl;
    cin>>columns;

    

    if(rows<1 || columns<1)
    {
        cout<<endl<<"Invalid order";
    }
    else
    {
    int a[rows][columns];
        cout<<"The order is "<<rows<<"x"<<columns<<endl;

        cout<<"Enter data of rows and columns (Enter data row wise):- ";

            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<columns;j++)
                {
                    cin>>a[i][j];
                }
            }
        
        cout<<"Entered data:- "<<endl;

        for(int i=0;i<rows;i++)
        {
            for( int j=0;j<columns;j++)
            {
                cout<<a[i][j]<<" ";
                
            }
        cout<<"\n";

        }

    }


return 0;
}