#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n);
int main()
{
	int a[100];
	int size;
	cin>>size;
	for(int i=0; i<size; i++)
	{
		cin>>a[i];
	}
	selection_sort(a,size);
	for(int j=0;j<size;j++)
	{
		cout<<a[j]<<" ";
	}
}

void selection_sort(int arr[],int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		int min_index=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min_index])
			min_index=j;
		}
		swap(arr[min_index],arr[i]);
	}
}