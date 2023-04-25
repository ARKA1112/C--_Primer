#include <iostream>
#include <vector>
using namespace std;


void print(const vector<string> ivec, vector<string>::const_iterator it)
{
    if (it == ivec.end())
        return;
    else
        cout<<*it++<<endl;
        print(ivec, it);
        //cout<<"file name"<<__FILE__<<endl;
}

//Also includes ex 6.47
int main()
{
    const vector<string> ivec = {"deo","demon","slayer"};
    vector<string>::const_iterator it;
    it = ivec.begin();
    cout<<"File name: "<<__FILE__
        <<"Date: "<<__DATE__
        <<"Time: "<<__TIME__<<endl;
    print(ivec,it);
}