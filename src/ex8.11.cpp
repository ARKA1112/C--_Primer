#include <iostream>
#include <vector>

using namespace std;

int main() {
    struct PersonInfo {
        std::string name = "arka pand";
        vector<std::string> phn = {"9876543210", "9876543211"};
        int age = 20;
    };
    PersonInfo p1;
    p1.name = "Arka Prava Panda";
    cout<<p1.name;
}