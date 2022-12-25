#include <iostream>
using namespace std;

int main()
{
    string result;
    string::size_type n;
    cout<<"Enter a string"<<'\n';
    while(cin>>result)
    {
        n = result.size();
        result[n] = 'X';
        cout<<result;
    };
}