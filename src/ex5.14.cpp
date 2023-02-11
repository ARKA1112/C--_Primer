//Done
#include <iostream>
#include <vector>
using namespace std;
string i;
vector<string> v;
vector<int> w;
int t;
int rep;
vector<string> u;

int main()
{
    cout<<"Enter words ";
    while (cin >> i && i != "stop")
    {
        v.push_back(i);
    }
    for (auto j = v.begin(); j != v.end(); ++j)
    {
        u.push_back(*j);
        while (*j == * (j+1) && j != v.end())
        {
          ++t;
          ++j;
        }
        w.push_back(t);

    }
    for (auto i = w.begin(); i != w.end(); ++i)
    {
        if(*i > *(i+1))
        {
            rep = *i;
        }
    }
    if (rep != 0)
    {
        cout << "The greatest repetition is "<<rep;
    }
    else
    {
        cout<< "No repeated words found";
    }
}