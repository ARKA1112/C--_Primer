#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> el(10,1);
    for (auto i = el.begin(); i!=el.end();++i)
    {
        *i=2*(*i);
    }
    for (auto i:el)
    {
        cout<<i;
    }
}

///Done