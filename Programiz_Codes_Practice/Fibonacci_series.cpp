#include<iostream>
using namespace std;

int main()
{
    int user,temp1=0, temp2=1, nextterm=0;
    cout<<"Enter a number of terms for the series: "<<endl;
    cin>>user;

    for(int i=1; i<=user; i++)
    {
        if(i == 1)
        {
            cout<<temp1<<",";
            continue;
        }
        if(i == 2)
        {
            cout<<temp2<<",";
            continue;
        }
        // updating the values
        nextterm = temp1 + temp2;
        // temp2 = nextterm; 
        temp1 = temp2;
        temp2 = nextterm;
        cout<<nextterm<<",";
    }
    

}