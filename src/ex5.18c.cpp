//Done
#include <iostream>
#include <vector>
using namespace std;
string a,b;
char more;

int main()
{
    do
    {
        cout<<"Enter two strings";
        cin>>a>>b;
        if (a>b)
        {
            cout<<"a is greater";
        }
        else
        {
            cout<<"b is greater";
        }
        cout<<"Again? ";
        cin>>more;
    } while (more != 'n');
    
}