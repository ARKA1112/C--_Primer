#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    int i;
    //read until end of file or other input failure

    while (cin >> i && i != 0)
    {
        v.push_back(i);
    }
    auto beg = v.begin();
    while (beg != v.end() && *beg >= 0)
    {
        ++beg;
    }
    if (beg == v.end())
    //we all know that all elements in v are greater than or equal to zero
    {
        for (auto i= v.begin(); i!= v.end(); ++i)
        {
            cout<<*i<<'\n';
        }
    }
}