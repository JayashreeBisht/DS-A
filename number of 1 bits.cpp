#include<iostream>
#include<bits/stdc++.h>
#include<stdint.h>
using namespace std;

int main()
{
	uint32_t n;
	cout << "Enter number: ";
	cin >> n;
	int count=0;
	while(n!=0)
	{
		count++;
		n=n&(n-1);
	}
	cout << "The number of 1's are:" << count;
	return 0;
}

