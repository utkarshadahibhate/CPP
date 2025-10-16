#include<iostream>
using namespace std;

int main()
{
    int i=5,j=5,k=5,y,z,add1,add2;

    // i=i+1;
    // j+=1;
    // k++;

    // cout<<i<<" "<<j<<" "<<k<<endl;

    y = ++i;
    z = j++;

    add1 = 2 * y + 2 * z; // 2*6 + 2*5 = 12+10 = 22
    add2 = 2 * ++i + 2 * j++; // 2*7 + 2*6 = 14+12 = 26

    cout<<y<<" "<<z<<endl;
    cout<<i<<" "<<j<<endl;
    cout<<add1<<endl;
    cout<<add2<<endl;

    return 0;
}