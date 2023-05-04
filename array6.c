/*
16.	WAP to find smallest and largest element in a matrix of each row and column.
*/

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enetr the size of array :  \n");
    scanf("%d",&n);
    int a[n][n],minR[n],maxR[n],maxC[n],minC[n];
    printf("Enter the elements :  \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("indx  number %d,%d :  ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is of order %d * %d  \n",n,n);
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
            if(j==0 && i+j==i)
            {
                maxR[i]=a[i][j];
                minR[i]=a[i][j];

                maxC[i]=a[j][i];
                minC[i]=a[j][i];
                continue;
            }

            if(maxR[i]<a[i][j])
            {
                maxR[i]=a[i][j];
            }
            if(maxC[i]<a[j][i])
            {
                maxC[i]=a[j][i];
            }
            if(minR[i]>a[i][j])
            {
                minR[i]=a[i][j];
            }
            if(minC[i]>a[j][i])
            {
                minC[i]=a[j][i];
            }
        }
    }
    printf("maximum element in rows are :  \n");
    for(i=0;i<n;i++)
    {
        printf("Row %d =  ",i+1);
        printf("%d\t",maxR[i]);
    }
    printf("\n\nminimum element of rows are :  \n");
    for(i=0;i<n;i++)
    {
        printf("Row %d =  ",i+1);
        printf("%d\t",minR[i]);
    }
    printf("\n\nmaximum element of columns are :  \n");
    for(i=0;i<n;i++)
    {
        printf("Column %d =  ",i+1);
        printf("%d\t",maxC[i]);
    }
    printf("\n\nminimum element of columns are  \n");
    for(i=0;i<n;i++)
    {
        printf("Column %d =  ",i+1);
        printf("%d\t",minC[i]);
    }

return 0;
}