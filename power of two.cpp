#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout << "Enter number: ";
	cin >> n;
	bool ans;
	if(n==0)
	{
		ans=false ;
	}
	int temp=n;
	if((n&-temp)==n)
	{
		ans=true ;
	}
	cout << boolalpha << ans;
	return 0;
}

