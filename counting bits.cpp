#include<iostream>
#include<stdint.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int hammingWeight(int n)
{
	int c=0;
	while(n!=0)
	{
		c++;
		n=n&(n-1);
	}
	return c;
}

int main()
{
	uint32_t n;
	vector<int> res;
	cout << "Enter number: ";
	cin >> n;
	for(int i=0;i<=n;i++)
	{
		int count=hammingWeight(i);
		res.push_back(count);
	}
	cout << "The counting bits are: ";
	for(int i=0;i<=n;i++)
	{
		cout <<  res[i] << " ";
	}
	return 0;
}
