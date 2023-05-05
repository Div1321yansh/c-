#include<stdio.h>
int main()
{
    int n,i,j,k,count=0,flag;
    printf("Enter the size of array :  \n");
    scanf("%d",&n);
    int a[n],b[n];
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
    printf("\nEntr the element that you want to remove :  \n");
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(j==a[i])
        {
            continue;
        }
        count++;
    }
    for(i=0,k=0;i<n,k<count;i++,k++)
    {
        flag=2;
        if(j==a[i])
        {
            a[k]=a[i+1];
            flag=0;
        }
        if(flag==0)
        {
            continue;
        }
        else
        {
            a[k]=a[i];
        }    
    }
    printf("elements are  :   ");
    for(k=0;k<count;k++)
    {
        printf("%d, ",a[k]);
    }

  return 0;
}