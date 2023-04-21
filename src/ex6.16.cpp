#include <iostream>
using namespace std;

int caps_check(string s)
{
    for (int i=0; i!=s.size();i++)
    {
        if(isupper(s[i])) return 1;
    }
    return 0;
}

int main()
{
    if (caps_check("hEllo")) cout<<"Uppercase";
    else cout<<"Not Uppercase";
    return 0;

}