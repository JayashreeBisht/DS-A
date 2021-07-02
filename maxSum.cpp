#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[20],n,max=0,i;
	cout << "Enter the array size: ";
	cin >> n;
	cout << "Enter array elements: ";
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	sort(arr,arr+n);
	for(i=0;i<n-1;i+=2)
	{
		max+=arr[i];
	}
	cout << "The maximum pair sum is: ";
	cout << max;
	return 0;
}
