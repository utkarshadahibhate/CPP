// ax2 + bx + c = 0
// r = (-b + sqrt(b*b - 4*a*c))/(2*a)

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float a,b,c,r1,r2;
    cout<<"Enter a value for a : ";
    cout<<"Enter a value for b : ";
    cout<<"Enter a value for c : ";
    cin>>a>>b>>c;

    r1 = (-b + sqrt(b*b - 4*a*c))/(2*a);

    r1 = (-b - sqrt(b*b - 4*a*c))/(2*a);

    cout<<"Roots are : "<<r1<<" And "<<r2<<endl;
    
}