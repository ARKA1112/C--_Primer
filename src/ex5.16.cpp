#include <iostream>
#include <vector>
using namespace std;
vector <int> w;
int v;

int main()
{
    while (size(w) != 5)
    {
        cin>>v;
        w.push_back(v);
    }
    for (auto index = 0; index != size(w); ++index)
    {
        cout<<w[index];
    }
    for(auto a: w)
    {
        cout<<a*2<<" In squared form "<<'\n';
    }
}

//DOne