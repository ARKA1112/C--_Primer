#include <iostream>
#include <vector>

using namespace std;

void arr_2_vec()
{
    int arr[]={};
    vector <int> arrvec{};
    cout<<"Enter numbers only";
    //int *p = arr;
    for(int x=0;x<6;)
        {
            cin>>arr[x];
            arrvec.push_back(arr[x]);
            ++x;
        };
    
    for (auto v:arrvec)
    {
        cout<<v<<endl;
    }
}

int main()
{
    arr_2_vec();
    return 0;
}