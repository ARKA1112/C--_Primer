#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Ball
{
    private:
        string m_color="black";
        double m_radius = 10.0;
    public:
        Ball() = default;
        Ball(string color){m_color=color;};
        Ball(double radius){m_radius=radius;};
        Ball(string color, double radius){m_color=color, m_radius=radius;};
        void print()
        {
            cout<<"color: "<<m_color<<","<<"radius: "<<m_radius<<endl;
        }

     
};

int main()
{
    Ball def{};
    def.print();

    Ball blue{"blue"};
    blue.print();

    Ball twenty{20.0};
    twenty.print();

    Ball blueTwenty{"blue", 20.0};
    blueTwenty.print();


    return 0;
}