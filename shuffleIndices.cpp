#include<iostream>
using namespace std;

void shuffleIndices(int arr1[],string arr2[],int n)
{
	int i;
	string res[n];
	for(i=0;i<n;i++)
	{
		res[i]=arr2[arr1[i]];
	}
	cout << "The result is: ";
	for(i=0;i<n;i++)
	{
		cout << res[i] << "";
	}
}
int main()
{
	string arr2[20];
	int arr1[20],n;
	cout << "enter size:";
	cin >> n;
	cout << "Enter string: ";
	for(int i=0;i<n;i++)
	{
		cin >> arr2[i];
	}
	cout << "Enter array elements: ";
	for(int i=0;i<n;i++)
	{
		cin >> arr1[i];
	}
	shuffleIndices(arr1,arr2,n);
	return 0;
}
