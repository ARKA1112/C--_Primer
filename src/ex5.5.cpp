//Done 

#include <iostream>
#include <vector>
using namespace std;

vector<string>grades = {};

int main()
{

    int i;
    cout<<"Enter Scores "<<'\n';
    while (cin>>i && i != 0)
        {
            if (i<60)
            {   
                grades.push_back("Fail");
            }   
            else
            {
                if (i>=60 && i <69)
                {
                    grades.push_back("D");
                }
                else
                {
                    if (i>=69 && i<79)
                    {
                        grades.push_back("C");
                    }
                    else
                    {
                        if(i>=79 && i<89)
                        {
                            grades.push_back("B");
                        }
                        else
                        {
                            if(i>89 && i<99)
                            {
                                grades.push_back("A");
                            }
                            else
                            {
                                if(i>=99 && i<100)
                                {
                                    grades.push_back("A+");
                                }
                                else
                                {
                                    grades.push_back("A++");
                                }
                            }
                        }
                    }

                }
            }
            }
            for(auto j = grades.begin();j!=grades.end();++j)
            {
                cout<<*j<<'\n';
            }
}