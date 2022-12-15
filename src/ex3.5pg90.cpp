#include<iostream>
#include<string>
//Completed
using namespace std;

int main()
{
    string words,cont,sepa;
    
    cout<<"Enter words: ";
    while(cin>>words && words!="end")
    {
        //cout<<words<<'\n';
        cont+=words;
        sepa+=words+' ';
    }
    cout<<cont<<'\n'<<sepa;
    return 0;
}