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
	int x=arr[0];
	for(int i=1;i<n;i++)
	{
		x=x^arr[i];
	}
	cout << "The single number is:" << x;
	return 0;
}

