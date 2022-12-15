#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line;
    auto p = 0;
    //read input a line at a time until end of file
    cout<<"enter a line";
    while (getline(cin, line))
    {
        cout<<line;
        if(line.empty())
        {
            break;
        };
        if (line.size()>=8)
        {
            p = line.size();
            cout<<' ' <<p<<endl;
        };
    };
    return 0;
}
