/*3.	Declare an array and initialise it to {10, 20.89, 44, 23, -12, -67, -12.34, 78}
.WAP in C to find the sum of all elements except the negative ones.
*/
#include<stdio.h>
int main()
{
    float a[]={10, 20.89, 44, 23, -12, -67, -12.34, 78},sum=0;
    int i=0;
    for(i=0;i<8;i++)
    {
        if(a[i]>=0)
        {
            sum=sum+a[i];
        }
    }
    printf("\nsum of positive elements is : %f",sum);
return 0;
}