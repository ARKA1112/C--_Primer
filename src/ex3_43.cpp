#include <iostream>
#include <vector>
using namespace std;

size_t nrow;
size_t ncol;
int ia[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
void proc1()
{
    cout<<"Enter rows"<<endl;
    cin>>nrow;
    cout<<"Enter cols"<<endl;
    cin>>ncol;
    int ia[nrow][ncol];
    for (size_t i=0;i!=nrow;++i)
    {
       for(size_t j=0;j!=ncol;++j)
          {
               ia[i][j] = i*ncol + j;
           }
    };
//range based

//ordinary for
    //}


}

int main()
{
    for(const int (&i)[3]: *ia)
        for(const int &j : i)
        {
            cout<<j;
        }
}