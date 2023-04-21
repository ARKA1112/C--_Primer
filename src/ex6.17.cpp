//Write a function to determine whether a string contains any capital
//letters. Write a function to change a string to all lowercase. Do the ////////parameters you//
//used in these functions have the same type? If so, why? If not, why not?



#include <iostream>
using namespace std;

void low_caser(string s)
{
    for (int i=0; i!=s.length();i++)
    {
        if (islower(s[i]))  s[i]=toupper(s[i]);
    }
    cout<<s;
}

int main()
{
    low_caser("hello");
}