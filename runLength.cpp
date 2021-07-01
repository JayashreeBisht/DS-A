#include<iostream>
using namespace std;

void runLength(int arr[],int n)
{
	int i,j,freq,val;
	for(i=0;i<n-1;i=i+2)
	{
		freq=arr[i];
		val=arr[i+1];
	    for(j=0;j<freq;j++)
		{
			cout << val <<"";
		}
	}
}
int main()
{
	int arr[20],n;
	cout << "enter size:";
	cin >> n;
	cout << "Enter array elements: ";
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	runLength(arr,n);
	return 0;
}
