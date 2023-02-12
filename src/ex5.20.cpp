//Done
#include <iostream>
#include <vector>

using namespace std;
string buf;
vector <string> list = {};

int main()
{
    cout<<"Enter strings subsequently ";
        while (cin>>buf && size(list)<6)
        {
            list.push_back(buf);
            if(*(list.end()-1) == *(list.end()-2))
            {
                cout<<"repeated words detected"<<'\n'<<*(list.end()-1)<<'\n';
                list.push_back("repeat");
                break;
            }
        }
        if(*(list.end()-1) != "repeat")
        {
            cout<<"No repeated words detected"<<'\n';
        }
}