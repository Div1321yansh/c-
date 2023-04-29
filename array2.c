#include<stdio.h>   
/*
2.	Declare an array of integer type. It has 10 elements out of which one
 is greater by 5 than another element.WAP in C to find both the elements.
For e. g:- Array A has elements 2,3,4,7
*/
int main()
{
    int n,i,j,k=0;
    printf("Enter the size of array :  \n");
    scanf("%d",&n);
    int a[n];
    printf("\nEnetr the elements : \n");
    for(i=0;i<n;i++)
    {
        printf("index number %d :   ",i);
        scanf("%d",&a[i]);
    }
    printf("\nElements of array a are :  ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        k++;
        for(j=0+k;j<n;j++)
        {
            if(a[j]-a[i]==5)
            {
                printf("\n%d and %d are the numbers",a[i],a[j]);
            }
        }
    }

return 0;
}