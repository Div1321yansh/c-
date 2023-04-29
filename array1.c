/*1 WAP in C to initialise two arrays A and B and print the elements which are 
common to both the arrays
*/
#include<stdio.h>      
int main()
{
    int n,i,j,n2,comm,count=0,common;
    printf("enter the size of array 1  :  \n");
    scanf("%d",&n);
    printf("\nEnter the size of array 2 :  \n");
    scanf("%d",&n2);
    int a[n],a2[n2];
    printf("\nenter the elements of array 1 :  \n");
    for(i=0;i<n;i++)
    {
        printf("index number %d :  ",i);
        scanf("%d",&a[i]);
    }
    printf("\nenter the elements of array 2 :  \n");
    for(i=0;i<n2;i++)
    {
        printf("index number %d :  ",i);
        scanf("%d",&a2[i]);
    }
    printf("\nelements of array 1  :  ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nelements of array 2 are : ");
    for(i=0;i<n2;i++)
    {
        printf("%d\t",a2[i]);
    }
    printf("\ncommon elements are :  ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==a2[j])
            {
                common=a[i];
                count++;
                break;
            }
        }
        if(count==1)
        {
            printf("%d\t",common);
        }
        count=0;
    }
return 0;
}