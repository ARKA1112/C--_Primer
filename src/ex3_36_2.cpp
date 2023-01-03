//Done
#include <iostream>
#include <vector>
using namespace std;

vector <int>  ia1 = {1, 2, 3, 4, 5};
vector <int>  ia2 = {2, 3, 4, 5, 6};

int *p1 = &ia1[0];
int *p2 = &ia2[0];

int main()
{
    if (ia1==ia2)
    {
        cout<<"Both vectors are equal";
    }
    else{
        cout<<"vectors are unequal";
    };
}
