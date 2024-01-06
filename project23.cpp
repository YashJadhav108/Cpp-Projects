#include<bits/stdc++.h>
using namespace std;

//WAP to find all trignometric values of an angle entered by the user.

int main()
{
float a;
    cout<<"Enter the value of angle in degrees:- "<<endl;
    cin>>a;

float sin1 = sin(a);
float cos1 = cos(a);
float tan1 = tan(a);

float cosine1 = 1/sin1;
float sec1 = 1/sec1;
float cot1 = 1/tan1;

float arcsin1 = asin(a);
float arccos1 = acos(a);
float arctan1 = atan(a);

float arccosine = 1/arcsin1;
float arcsec = 1/arccos1;
float arccot = 1/arctan1;

        cout<<"sin of the angle is "<<sin1<<endl;
        cout<<"cos of the angle is "<<cos1<<endl;
        cout<<"tan of the angle is "<<tan1<<endl;

        cout<<"cosine of the angle is "<<cosine1<<endl;
        cout<<"sec of the angle is "<<sec1<<endl;
        cout<<"cot of the angle is "<<cot1<<endl;

        cout<<"sin-inverse of the angle is "<<arcsin1<<endl;
        cout<<"cos-inverse of the angle is "<<arccos1<<endl;
        cout<<"tan-inverse of the angle is "<<arctan1<<endl;

        cout<<"cosine-inverse of the angle is "<<arccosine<<endl;
        cout<<"sec-inverse of the angle is "<<arcsec<<endl;
        cout<<"cot-inverse of the angle is "<<arccot<<endl;
        


return 0;
}