#include <iostream>
using namespace std;

int main()
{
    constexpr int size = 5;
    int ia[size] = {1,2,3,4,5};
    for (int *ptr = ia, ix=0;
        ix != size && ptr != ia+size; ++ix, ++ptr)
        {}
}


//size is a const int, size of the ia is also const
//ptr points to the first element of the ia
//ix is initialized to zero
//In  the for loop the *ptr points to the first element of ia, 
//afterwards; if the value of ix is not equal to the size and the if the pointer doesnt points to the next element after the last element of the ia array, then we shall increment the value of the ix and the ptr at each loop by one


//ex4.33

//somevalue ? ++x, ++y: --x, --y
//if some value is x+1 then do x-1 else if y+1 then do y-1