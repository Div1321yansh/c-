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
    for(i=1; i<=n; i++)
    {
        for(j=0; j<n+i; j++)
        {
            if(i+j>n)
            {
                if((i+j)%2==0)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}
