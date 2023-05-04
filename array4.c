/*
10.	WAP in C to declare and initialise a two dimensional array of size 2*2 and
 find out the determinant of the matrix
*/
#include<stdio.h>
int main()
{
    int n=2,a[n][n],i,j,term1=1,term2=1,determinant;
    printf("Enter the elements :  \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("index number %d,%d:  ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatrix is of order %d*%d :  \n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                term1=term1 * a[i][j];
            }
            else if(i+j==1)
            {
                term2=term2 * a[i][j];
            }
        }
    }
    determinant=term1-term2;
    printf("\n Determinant = %d",determinant);
return 0;
}