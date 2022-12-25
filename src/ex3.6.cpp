#include <iostream>
using namespace std;

int main()
{
    string result;
    cout<< "Enter a string"<<'\n';
    while (cin >> result)
    {
        for (char x:result)
        {
            x = 'X';
            cout<<x;
        }
    };

}
//Done