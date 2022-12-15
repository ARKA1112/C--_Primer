#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s {"Hello World!!!"};
    //punct_cnt has the same type as that of s.size
    decltype(s.size()) punct_cnt = 0;
    //count the number of characters
    for (auto x:s)
    {
        if(ispunct(x))
        {
            ++punct_cnt;
        };
    };
    cout<<punct_cnt;
}