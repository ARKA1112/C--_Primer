#include <iostream>
#include <vector>
using namespace std;


void print(const vector<string> ivec, vector<string>::const_iterator it)
{
    if (it == ivec.end())
        return;
    cout<<*it++<<endl;
    print(ivec, it);
}

int main()
{
    const vector<string> ivec = {"deo","demon","slayer"};
    vector<string>::const_iterator it;
    it = ivec.begin();
    print(ivec,it);
}