//Done
#include<iostream>
#include<vector>
using namespace std;


vector<string>grades = {};

int main()
{
    int score;
    cout<<"Enter the score sequentially: ";
    while(cin>>score && score != 0)
    {
        (score < 60) ? grades.push_back("Fail"):
        (score>=60 && score<69) ? grades.push_back("D"):
        (score>=69 && score<79) ? grades.push_back("C"):
        (score>=79 && score<89) ? grades.push_back("B"):
        (score>=89 && score<99) ? grades.push_back("A"):
        (score>=99 && score<100) ? grades.push_back("A+"):grades.push_back("A++");
    }
    for (auto i = grades.begin(); i!=grades.end();++i)
    {
        cout<<*i<<'\n';
    }
}