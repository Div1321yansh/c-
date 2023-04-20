#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
    for(int i=rows; i>0; i--)
    {
        for(int j=1; j<=rows; j++)
        {
            if(j<i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    return 0;
}