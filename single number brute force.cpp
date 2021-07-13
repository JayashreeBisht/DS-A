#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout << "Enter size: ";
	cin >> n;
	vector<int> arr(n);
	cout << "Enter elements: ";
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	for(int i=0;i<n;i++)
	{
		int m=arr[i];
		int c=1;
		for(int j=0;j<n;j++)
		{
			if(arr[j]==m && j!=i)
			{
				c++;
			}
		}
		if(c%2!=0)
		{
			cout << "The single number is: "<< m << endl;
		}
	}
}
