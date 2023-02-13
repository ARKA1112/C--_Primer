//Done
#include <iostream>
#include <vector>
using namespace std;

int a1, a2;
char r;

int main()
{
    while(cin>>a1>>a2)
    {

        try
        {
            

                    if(a2!=0)
                    {
                        cout<<a1/a2<<'\n';
                        cout<<"Do again y/n "<<'\n';
                        cin>>r;
                    }
                    else
                    {
                        throw runtime_error("a2 must not be zero!");
                    }
            
    
         }
        catch(runtime_error e)
        {
            cout << e.what() << '\n'
            <<"Try again? y/n";
            cin>>r;
            if(r!='y')
            {
                break;
            }
        }
    
  
    }
}