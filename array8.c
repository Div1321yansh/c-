#include <stdio.h>
int main()
{
    int n1, n2, i, j, k;
    printf("Enetr the size of array for rows :  \n");
    scanf("%d", &n1);
    printf("Enter the size of array for column : \n");
    scanf("%d", &n2);
    int a[n1][n2], minR[n1], minC[n2], min, minimum1, minimum2, transpose[n2][n1];
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("index number %d %d :  ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("<Matrix is of order %d %d  :    \n", n1, n2);
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0, k = 0; i < n1, k < n1; i++, k++)
    {
        for (j = 0; j < n2; j++)
        {
            if (i == k && j == 0)
            {
                min = a[i][j];
            }
            if (j == 0)
            {
                continue;
            }
            else if (min > a[i][j])
            {
                min = a[i][j];
            }
        }
        minR[i] = min;
    }
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            transpose[i][j] = a[j][i];
        }
    }

    for (i = 0, k = 0; i < n1, k < n1; i++, k++)
    {
        for (j = 0; j < n2; j++)
        {
            if (i == k && j == 0)
            {
                min = transpose[i][j];
            }
            if (j == 0)
            {
                continue;
            }
            if (min > transpose[i][j])
            {
                min = a[i][j];
            }
        }
        minC[i] = min;
    }
    printf("\nsmallest row elements are :  ");
    for (i = 0; i < n1; i++)
    {
        printf("%d\t", minR[i]);
    }
    printf("\nsmallest column elements are :  ");
    for (i = 0; i < n2; i++)
    {
        printf("%d\t", minC[i]);
    }
    minimum1 = minR[0];
    for (i = 1; i < n1; i++)
    {
        if (minimum1 > minR[i])
        {
            minimum1 = minR[i];
        }
    }
    printf("\n%d is minimum in rows", minimum1);
    minimum2 = minC[0];
    for (i = 0; i < n2; i++)
    {
        if (minimum1 == minC[i])
        {
            continue;
        }
        if (i == 0)
        {
            continue;
        }
        if (minimum2 > minC[i])
        {
            minimum2 = minC[i];
        }
    }
    printf("\n%d is the minimum in column", minimum2);
    printf("\nsum of smallest two elements is %d", minimum1 + minimum2);
    return 0;
}