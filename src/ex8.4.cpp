#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    vector<string> lines;
    string line;
    string ss;
    string words;
    ifstream file("demo.txt");
    while(getline(file, line)){
    // Split the line into words
        stringstream ss(line);
        while(getline(ss,words,' '))
            {
                cout<<words<<'\n';
            }
    }
}