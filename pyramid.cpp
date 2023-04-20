#include <iostream>
using namespace std;

void pattern(int n);

int main()
{
    int rows;
    cin>>rows;
    pattern(rows);
    return 0;
}

void pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<n+i; j++)
        {
            if(i+j>n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}