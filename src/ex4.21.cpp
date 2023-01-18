#include <iostream>
#include <vector>

using namespace std;

vector <int> vec {1,3,534,5345,6,234};

int main()
{
    vector <int>::iterator i;
    for (i = vec.begin(); i != vec.end(); ++i)
    {
        cout<<((*i%2==0)? "even":"odd")<<endl;
    }
}

//Done