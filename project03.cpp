#include<iostream>
using namespace std;

//remove units place from a number
int main()
{
int n,r;

cout<<"Enter a number to remove the number at its units place:-"<<endl;
cin>>n;

r=n/10;

cout<<"The number is "<<r;
return 0;
}