#include<bits/stdc++.h>
using namespace std;

//WAP to find the wind-chill factor of a location by reading temp and wind velocity of the location.


int main()
{
float t,v;
    cout<<"Find the wind-chill factor of a location "<<endl;
    cout<<"Enter the temperature of the location:- "<<endl;
    cin>>t;
    cout<<"Enter the wind velocity of the location:- "<<endl;
    cin>>v;

float wcf = 35.74 + 0.6215*t + ((0.4275*t)-35.75)*(pow(v,0.16));

cout<<"The wind chill factor is "<<wcf;
return 0;
}