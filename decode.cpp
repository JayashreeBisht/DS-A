#include<iostream>
using namespace std;

void decode(int arr[],int n,int first)
{
	int i,j;
	int res[n+1];
	res[0]=first;
	for(i=0;i<n;i++)
	{
		res[i+1]=res[i]^arr[i];
	}
	cout << "The decoded array is: ";
	for(i=0;i<=n;i++)
	{
		cout << res[i];
	}
}
int main()
{
	int arr[20],n,first;
	cout << "enter size:";
	cin >> n;
	cout << "enter first element:";
	cin >> first;
	cout << "Enter array elements: ";
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	decode(arr,n,first);
	return 0;
}
