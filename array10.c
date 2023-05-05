#include<stdio.h>
int main()
{
    int n,i,j,k,num,pos;
    printf("Enter the size of array :  \n");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements :  \n");
    for(i=0;i<n;i++)
    {
        printf("index number %d :  ",i);
        scanf("%d",&a[i]);
    }
    printf("array elements are :  ");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\nEnter the element you want to enter :  \n");
    scanf("%d",&num);
    printf("\nEnter the position it should be stored :  \n");
    scanf("%d",&pos);
    int b[n];
    /*for(i=0;i<n;i++)
    {
        if(i<pos)
        {
            b[i]=a[i];
        }
        else if(i==pos)       // code written by me 
        {
            b[i]=num;
        }
        else
        {
            b[i]=a[i-1];
        }
    }*/
    for(i=n-1;i>=pos;i--)
    {
       a[i+1]=a[i];       //code after searching from net 
    }
    a[pos]=num;
    printf("New array is :  ");
    for(i=0;i<n+1;i++)
    {
        printf(" %d",a[i]);
    }
return 0;
}