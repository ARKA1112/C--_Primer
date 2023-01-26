#include <iostream>
#include <vector>
using namespace std;



int main()
{
    int score;
    cout<<"Enter Score ";
    cin>>score;
    cout<<((score>=90)?"High Score":(score>60 && score<90)?"Pass":"Fail");
}
//done
//Obviously the one using the conditional operator is less cumbersome