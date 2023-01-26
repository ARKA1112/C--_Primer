#include <iostream>
using namespace std;


//prediction
//1st cout is 40/4 =10
//2nd cout is 4/40 = 0.1

int main()
{
    int x[10];
    int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(p)/sizeof(*p) << endl;
}