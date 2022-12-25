#include <iostream>
using namespace std;

int main()
{
    const string hexdigits = "0123456789ABCDEF";
    cout << "Enter a series of numbers between 0 and 15"
    << " separated by spaces. Hit ENTER when finished: "
    << endl;

    string result;

    string:: size_type n;
    while (cin >> n)
        if (n < hexdigits.size()) //ignore invalid input
        result += hexdigits[n];   // fetch the indicated hex digit

        cout << "Your hex number is : " << result << endl;

}