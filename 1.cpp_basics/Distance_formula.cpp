#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int x1,y1,x2,y2;
    float dist;
    cout<<"Enter a value for x1 and y1 : ";
    cin>>x1>>y1;
    cout<<"Enter a value for x2 and y2 : ";
    cin>>x2>>y2;
    dist = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    cout<<"Distance between the points are : "<<dist<<endl;
    return 0;
}