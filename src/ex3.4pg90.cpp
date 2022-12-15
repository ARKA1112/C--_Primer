#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line1,line2;
    cout<<"Enter two words: ";
    cin>>line1>>line2;
    if (line1.size()==line2.size())
    {
        cout<<"strings are equal";
    }
    else
    {
        cout<<max(line1,line2)<<max(line1.size(), line2.size());
    };
}