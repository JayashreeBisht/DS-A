#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
	string s;
	cout << "Enter string: ";
	getline(cin,s);
	int n=s.length();
	int left=0,right=n-1;
	for(int i=0;i<n;i++)
	{
		s[i]=tolower(s[i]);
	}
	while(left<=right)
	{
		if(s[left]==s[right])
		{
			left++;
			right--;
		}
		else if(!(s[left]>='a' && s[left]>='z'))
		{
			left++;
		}
		else if(!(s[right]>='a' && s[right]>='z'))
		{
			right--;
		}
		else
		{
			cout << "Not palindrome";
		}
	}
	cout << "Yes";
	return 0;
}
