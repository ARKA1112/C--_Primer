#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Hello World";
    for (auto x: str)
    {
        cout<<x<<'\n';
    }
}