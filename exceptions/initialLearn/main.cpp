#include <iostream>
#include<cmath>
#define pi 3.1416
using namespace std;

void power_factor(float a)
{
    if(a>1 || a<-1)
    {
        throw(a);
    }
    else
    {
        cout<<"VOLTAGE (v) IS LAGGING FROM CURRENT (I) by " << acos(a)*180/pi<< " degree\n";
    }
}
int main()
{
    float a;
    try
    {
        cout<<"Enter power factor";
        cin>>a;
        power_factor(a);
    }
    catch (float b)
    {
        cout<<" Caught an exception witn a="<< b << endl;
    }
return 0;
}



