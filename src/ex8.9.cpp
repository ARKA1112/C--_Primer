#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;


//funtion from the 314
istream& read_until_end(istream& stream)
{
    while (!stream.eof())
    {
        char c;
        stream >> c;
        cout << c << endl;
    }
    stream.clear();
    return stream;
}



int main(){
    istringstream stream("This is a line");
    read_until_end(stream);
}
//output


//the function read_until_end(istream& stream) is a)


//continuation of the excercise

