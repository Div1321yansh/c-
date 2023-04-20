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
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=1; j<2*n; j++)
        {
            if(j>=n+i || j<=n-i)
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