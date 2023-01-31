#include<iostream>
#include<vector>
#include<string>
using namespace std;

string v = "hello world";

int main()
{
    string::iterator iter = v.begin();
    while(iter != v.end())
    {
        cout<<*iter<<'\n';
        ++iter;
    };
}

//problem is the iterator doesnt know where to begin in the first place. so v.begin() should be defined.