//done
#include <iostream>
#include <vector>

using namespace std;

int ia1[] = {1,2,3,4,5,6};
int ia2[] = {2,3,4,5,6,7};

int main()
{
    int *p1 = ia1;
    int *p2 = ia1;

    while(p2==p1 && p1<end(ia1))
    {
        ++p1;
        ++p2;
    cout<<"Both arrays are equal";
    };
    if (p1!=p2)
    {

        cout<<"Arrays are not equal";
    };
    //cout<<"Both arrays are equal";

}