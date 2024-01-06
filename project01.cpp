#include<iostream>
#include<math.h>
using namespace std;

//WAP to find roots of a quadratic equation 
int main()
{
float a,b,c;
float r1,r2;
float D;
    cout<<"\tCalculator of roots of a quadratic equation\n\n";

        cout<<"for the quadratic equation ax²+bx+c=0,Enter a,b,c:-\n";
        cin>>a;
        cin>>b;
        cin>>c;

D=sqrt((b*b)-(4*a*c));

r1=(-b+D)/2;
r2=(-b-D)/2;


        cout<<"roots of the equation are:-\n";
        cout<<r1;
        cout<<" and ";
        cout<<r2;

return 0;
}