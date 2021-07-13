#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
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
	sort(arr.begin(),arr.end());
	int i=0,j=n-2;
	int m;
	while(i<=j)
	{
		m=(i+j)/2;
		if(arr[m]==arr[m^1])
		{
			i=m+1;
		}
		else
		{
			j=m-1;
		}
	}
	cout << "The single number is:" << arr[i];
	return 0;
}

