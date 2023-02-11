#include <iostream>
#include <vector>
using namespace std;
char i;
int main()
{
    do
    {
        int v1, v2;
        cout<<"Please enter two numbers to sum: ";
        if (cin >> v1 >> v2)
            cout << "Sum is: " << v1 + v2 << endl;
            cout<<"Again?";
            cin >> i;
    } while (i != 'n');
    
}
/*The problem was -- that it was an endless loop hence we added a loop exit procedure*/