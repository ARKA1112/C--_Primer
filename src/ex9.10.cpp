//DONE

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
    //Declare the empty vector and append the lines
    //to the vector which is read from the file
    vector<string>lines;
    ifstream file("demo.txt");
    string line;
    while(getline(file, line))
    {
        lines.push_back(line);
    }
    for(string x: lines)
        cout<<x<<'\n';

    //create an object to read from the vector and 
    //read and print each element from vector

    for(string x: lines){
        istringstream ss(x);
        string words;
        while(getline(ss, words, ' '))
        {
            cout<<words<<'\n';
        }
    }

}