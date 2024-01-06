#include<iostream>
using namespace std;

void swap();

//WAP to swap two numbers by using sep function.

int main()
{
int x,y;
    cout<<"enter two numbers (x,y) to swap them"<<endl;
    cout<<"enter x"<<endl;
    cin>>x;
    cout<<"enter y"<<endl;
    cin>>y;

    swap(x,y);

}

void swap(int a, int b)
{
int temp;
    temp=a;
    a=b;
    b=temp;
    
cout<<"x = "<<a<<" y = "<<b;
}