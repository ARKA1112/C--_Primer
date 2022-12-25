#include <iostream>
using namespace std;

int main()
{
    string punc = ",.;\"";
    string::size_type n;
    string words;
    cin>>words;
    n = words.size();
    while(!words[n]==punc[n])
    {
        cout << words[n];
    }
}