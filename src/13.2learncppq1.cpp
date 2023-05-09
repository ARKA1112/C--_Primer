#include <iostream>
#include <vector>

class IntPair
{
    public: 
    //private:
        int a,b;
        void set(int a1,int b1)
        {
            a=a1;
            b=b1;
        }

        void print()
        {
            std::cout<<"Pair("<<a<<","<<b<<")\n";
        }
};

int main()
{
	IntPair p1;
	p1.set(1, 1); // set p1 values to (1, 1)

	IntPair p2 { 2, 2 }; // initialize p2 values to (2, 2)

	p1.print();
	p2.print();

	return 0;
}