/*
14.	WAP to count how many palindrome numbers is present in an array
*/

#include<stdio.h>
int main()
{
    int n,i,j,count=0,rev=0,org,rem;
    printf("Enter the size of arrauy :  \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements :  \n");
    for(i=0;i<n;i++)
    {
        printf("index number %d :  ",i);
        scanf("%d",&a[i]);
    }
    printf("Array is :  ");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        org=a[i];
        for(j=a[i];j>0;j=j/10)
        {
            rem=j%10;
            rev=rev*10+rem;
        }
        if(rev==org)
        {
            printf("%d\t",org);
            count++;
        }
        rev=0;
    }
    printf("\n");
    printf("\n%d is the total number of palinmdrome numbers",count);
return 0;
}