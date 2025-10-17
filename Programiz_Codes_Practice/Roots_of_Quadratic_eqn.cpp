#include<iostream>
#include<cmath>
using namespace std;

// ax2 + bx + c = 0
// r = (-b + sqrt(b*b - 4*a*c))/(2*a)
// Discriminant, D = b*b - 4*a*c
// Discriminant conditions for roots
// D > 0 -- roots are real and different ( (r1,r2 = (-b +- sqrt(b*b - 4*a*c))/(2*a)))
// D = 0 -- roots are real and equal (r1 = r1 = (-b/(2*a)))
// D < 0 -- roots are complex and different ( (r1,r2 = ((-b/(2*a)) +- ((sqrt(-(b*b)) - iota* sqrt(4*a*c))/(2*a))
                                                        // real part        //imaginary part
int main(){
    float a,b,c,D,r1,r2,real_part,imaginary_part;

    cout<<"Enter values for a,b,c for the equation: "<<endl;
    cin>>a>>b>>c;
    D = b*b - 4*a*c;
    cout<<"Discriminant is : "<<D<<endl;

    // Conditions for roots
    if(D>0){
        cout<<"roots are real and different"<<endl;
        r1 = (-b + sqrt(D)/(2*a));
        r2 = (-b - sqrt(D)/(2*a));
        cout<<"r1: "<<r1<<"r2: "<<r2<<endl;
    }
    else if(D=0)
    {
        cout<<"roots are real and equal: "<<endl;
        r1 = (-b/(2*a));
        r2 = r1;
        cout<<"r1: "<<r1<<"r2: "<<r2;
    }
    else
    {
        cout<<"roots are complex and different"<<endl;
        real_part = (-b/(2*a));
        imaginary_part = sqrt(-D)/(2*a);
        cout<<"r1 : "<<real_part<<" - "<<imaginary_part<<" i "<<endl;
        cout<<"r2 : "<<real_part<<" + "<<imaginary_part<<" i "<<endl;
        
    }


}