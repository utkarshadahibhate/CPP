#include<iostream>
using namespace std;

int main()
{
    float r,area;
    cout<<"Enter Radius : ";
    cin>>r;
    //area = 3.1425f * r * r;
    area = (float)22/7 * r * r;
    cout<<"Area is : "<<area<<endl;
    return 0;

}