#include <iostream>
#include <vector>
using namespace std;
bool foundnfound(vector<int>::iterator begin, vector<int>::iterator end, int value)
{
    for (vector<int>::iterator it = begin; begin!=end; ++it)
    {
        if (*it == value)
        {
            return true;
        }
    }
    return false;
        
}


int main()
{
    vector<int> v1 {1,2,4,5,6,7,8,9};
    int value = 4;
    if (foundnfound(v1.begin(), v1.end(), value)){
        cout<<"Found"<<' '<<value<<'\n';
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}