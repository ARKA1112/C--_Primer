#include<iostream>
#include<vector>

class Employee
{
    private:
        std::string name;
        int id;
        int wage;
    public:

        void init(std::string n, int i, int w)
        {
            name = n;
            id = i;
            wage = w;
        }

        void print()
        {
            std::cout<<"Emp name "<<name<<'\n'
                <<"id "<<id<<'\n'
                <<"wage "<<wage<<std::endl;
        }
};


int main()
{
    Employee emp;
    //emp.name = "arka";
    //emp.id = 1;
    //emp.wage = 10;
    //emp.print();
    emp.init("arka",1,10);
    emp.print();
}