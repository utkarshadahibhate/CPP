#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float radius,volume;
    cout<<"Enter a radius value in meter: ";
    cin>>radius;
    volume = 3.14f *(pow(radius,3));
    cout<<"Volume of cylinder is : "<<volume<<" cubic_meter"<<endl;
    return 0;
}