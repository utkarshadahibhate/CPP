#include<iostream>
using namespace std;

int main(){
    int section_number,GS,FTW;
    cout<<"1) Grocery\n2) Cosmetics\n3) Clothing\n4) Stationary\n5) Footwear";
    cout<<"Enter the section number to visit "<<endl;
    cin>>section_number;

    switch(section_number){
        case 1:
        cout<<"Welcome to the grocery section, add valuable items to you kitchen"<<endl;
        cout<<"Enter a number for grocery subsection"<<endl;
        cin>>GS;
        switch(GS){
            case 1:
            cout<<"Daily use ration items section"<<endl;
            break;
            case 2:
            cout<<"Processed Food items section"<<endl;
            break;
            case 3:
            cout<<"Milk and frozen Products section";
            break;
            case 4:
            cout<<"Cooking oil and spices section"<<endl;
            break;
            default:
            cout<<"Enter a valid section number section"<<endl;
        }

        break;
        case 2:
        cout<<"Welcome to the cosmetic section, add beauty products to your beautiful life"<<endl;
        break;
        case 3:
        cout<<"Welcome to the clothing section, Add style to your looks"<<endl;
        break;
        case 4:
        cout<<"Welcome to the Stationary section"<<endl;
        break;
        case 5:
        cout<<"Welcome to the footwear section, Walk with comfort"<<endl;
        break;
        default:
        cout<<"Invalid section number"<<endl;
    }
}