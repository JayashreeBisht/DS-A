#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[20],n,i,copy[20],c=0;
	cout << "Enter the array size: ";
	cin >> n;
	cout << "Enter array elements: ";
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	for(i=0;i<n;i++)
	{
		copy[i]=arr[i];
	}
	sort(arr,arr+n);
	for(i=0;i<n;i++)
	{
		if(arr[i]!=copy[i])
		{
			c++;
		}
	}
	cout << "The no of non-inplace elements are: ";
	cout << c;
	return 0;
}
