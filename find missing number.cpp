#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findMissing(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	int res=(n*(n+1))/2 - sum;
	return res;
}


int main()
{
	int n,arr[100];
	cout << "Enter size: ";
	cin >> n;
	cout << "Enter elements: ";
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	int num=findMissing(arr,n);
	cout << "The missing number is: " << num;
	return 0;
}
