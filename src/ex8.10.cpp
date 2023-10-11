//this also includes 8.11
// because that would resort to an unchangable value/default value

#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;

int func()
{
    //create a vector
    vector<string> vect;

    //open the file
    string filename = "myfile.txt";
    ifstream file(filename);
    
    //read eachline
    string eachline;
    while (getline(file, eachline,'\n'))
    {
        vect.push_back(eachline);
    }
    cout<<eachline;
    file.close();

    //print the vector using istringsteram

    istringstream strm;
    for (string i : vect){
        strm.str(i);
        string word;
        //read from eachline and print 

        strm >> word;
        cout<< vect.size();
        
    }
    cout << vect.size();
    return 0;
}

int main()
{
    func();
}