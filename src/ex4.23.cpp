#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "word";
    string pl = s + ((s[s.size() -1] == 's')? "":"s");
    cout << pl;
}
//done by adding parentheses