#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

struct PersonInfo {
    string name = "default";
    string number;
};

int main(){
    ifstream file;
    vector<PersonInfo> vect;
    file.open("/home/susearc/Documents/github/C++_Primer/src/myfile.txt",ios::out);
    string phn;
    while (getline(file, phn)){
        PersonInfo p1;
        p1.number = phn;
        vect.push_back(p1);
    }
    file.close();
    ofstream out2;
    out2.open("/home/susearc/Documents/github/C++_Primer/src/myfile_out.txt");
    for (PersonInfo a: vect){
        ostringstream num;
        num <<"name : " <<a.name <<'\n'<<"number: " << a.number <<endl;
        out2 << num.str();
    }
    out2.close();
}