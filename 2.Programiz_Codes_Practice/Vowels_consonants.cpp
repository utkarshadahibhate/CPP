#include<iostream>
using namespace std;

int main(){
    char w;
    bool Isuppercase, Islowercase;

    cout<<"Enter an alphabet"<<endl;
    cin>>w;

    // to check for being one of the vowel
    Islowercase = (w=='a' || w=='e' || w=='i'|| w=='o'|| w=='u');
    Isuppercase = (w=='A' || w=='E' || w=='I'|| w=='O'|| w=='U');

    // check for the vowels
    if(Islowercase || Isuppercase){
        cout<<"Vowel is present : "<<w<<endl;
    }else{
        cout<<"given alphabet is a consonant : "<<w<<endl;
    }
}