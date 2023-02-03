//Done


#include <iostream>
#include <vector>
using namespace std;
char ch;
int acnt, ecnt, icnt, ocnt, ucnt;
int main()
{
    cout<<"Enter a word/sentence";
    while(cin>>ch && ch != '0')  
    {
        if (ch == 'a')
        {
            ++acnt;
        }
        else
        {
            if (ch == 'e')
            {
                ++ecnt;
            }
            else
            {if (ch == 'i')
            {   
                ++icnt;/* code */
            }
            else
            {if(ch == 'o')
            {
                ++ocnt;
            }
            else
            {
                if (ch == 'u')
                {
                    ++ucnt;
                }
            }}
            }
        }
    }
    cout<<"a "<<acnt<<'\n'<<"e "<<ecnt<<'\n'<<"i "<<icnt<<'\n'<<"o "<<ocnt<<'\n'<<"u "<<ucnt;
}