#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string longestPrefix(string s[],int n)
{
	int m;
	string lcp=" ";
	sort(s,s+n);
	m=min(s[0].size(),s[n-1].size());
	for(int i=0;i<m;i++)
	{
		if(s[0][i]==s[n-1][i])
		{
			lcp=lcp+s[0][i];
		}
	}
	return lcp;
}

int main()
{
	string s[100];
	int i,n;
	cout << "Enter the size: ";
	cin >> n;
	cout << "Enter string: ";
	for(i=0;i<n;i++)
	{
		cin >> s[i];
	}
	
	string com=longestPrefix(s,n);
	cout << "Common prefix is: " << com;
	return 0;
}
