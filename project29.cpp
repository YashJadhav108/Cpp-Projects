#include<iostream>
using namespace std;
/*Write a C++ program to calculate salary of an employee, given his basic pay (to be entered by the user).
HRA=10% of the basic pay, TA=5% of the basic pay. Define HRA and TA as constants and use them to calculate the salary of the employee.*/

int main()
{
float n;
    cout<<"Enter basic salary of the employee"<<endl;
    cin>>n;

float HRA = (n*10)/100;
float TA = (n*5)/100;

float sal = n-HRA-TA;

    cout<<"The salary of the employee is "<<sal;

return 0;
}