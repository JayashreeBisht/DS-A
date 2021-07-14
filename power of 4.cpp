#include<iostream>
#include<bits/stdc++.h>
#include<stdint.h>
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
	cout << "Enter number: ";
	cin >> n;
	int count=hammingWeight(n-1);
	if(count%2==0)
	{
		cout << "In power of 4";
	}
	else
	{
		cout << "Not in power of 4";
	}
	return 0;
}
