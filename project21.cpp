#include<bits/stdc++.h>
using namespace std;

//Find the distance between two locations
// by reading the latitudes and longitudes of the locations.

int main()
{
    float l1,l2,lo1,lo2;
    cout<<"Enter latitude of the 2 locations:- "<<endl;
    cout<<"Enter latitude of location 1 :-"<<endl;
    cin>>l1;
    cout<<"Enter latitude of location 2:- "<<endl;
    cin>>l2;

    cout<<"Enter longitudes of the 2 locations:- "<<endl;
    cout<<"Enter longitude of location 1:- "<<endl;
    cin>>lo1;
    cout<<"Enter longitude of location 2 :- "<<endl;
    cin>>lo2;


        float d = (3963)*(acos(sin(l1)*sin(l2) + cos(l1)*cos(l2)*cos(lo2-lo1)));
        cout<<"The distance between the two locations is "<<d;
return 0;
}
