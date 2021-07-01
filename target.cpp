#include<iostream>
using namespace std;

void target(int arr[],int index[],int n)
{
	int i,j;
	int target[n];
	for(i=0;i<n;i++)
	{
		if(index[i]>=i)
		{
			target[index[i]]=arr[i];
		}
		else
		{
			for(int j=n-1;j>index[i];j--)
			{
				target[j]=target[j-1];
			}
			target[index[i]]=arr[i];
		}
	}
	cout << "The target array is: ";
	for(i=0;i<n;i++)
	{
		cout << target[i];
	}
}
int main()
{
	int arr[20],n,index[20];
	cout << "enter size:";
	cin >> n;
	cout << "Enter array elements: ";
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	cout << "Enter index: ";
	for(int i=0;i<n;i++)
	{
		cin >> index[i];
	}
	target(arr,index,n);
	return 0;
}
