//Done
#include <iostream>
#include <vector>
using namespace std;
vector<int> a;
vector<int> b;
int c;
int d;
int main()
{
    cout<<"Enter the elements of a ";
    while(size(a) != 6)
    {
        cin>>c;
        a.push_back(c);
    }
    cout<<"Now enter the values for the elements of b";
    while(size(b) != 4)
    {
        cin>>c;
        b.push_back(c);
    }
    for(decltype(size(b)) index = 0; index != size(b); ++index)
    {
        if(b[index] == a[index])
        {
            ++d;
        }
    }
    if(size(b) == d)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

}