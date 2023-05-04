// find the elements in an array whose sum is close to zero

#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    printf("Enter the size of array :  \n");
    scanf("%d",&n);
    int a[n],temp,sum=0;
    printf("\nEnetr the elements : \n");
    for(i=0;i<n;i++)
    {
        printf("index number %d :   ",i);
        scanf("%d",&a[i]);
    }
    printf("\nElements of array a are :  ");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\nSorted arry is :  ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nElements whose sum is cosest to zero are :  ");
    for(i=0;i<2;i++)
    {
        sum=sum+a[i];
        printf("\t%d",a[i]);
    }
    printf("\ntheir sum is %d",sum);


return 0;
}