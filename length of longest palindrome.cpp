#include<iostream>
using namespace std;

int longestPalindrome(string s)
{
	int n = s.length();
	int arr1[26],arr2[26];
	for(int i=0;i<26;i++)
	{
		arr1[i]=arr2[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		if(islower(s[i])) 
		{
			arr1[s[i]-97]++;
		}
		else
		{ 
			arr2[s[i]-65]++;
		}
	}
	
	int ans=0;
	bool first = false;
	for( int i=0;i<26;i++)
	{
		if(arr1[i]%2==0)
		{
			ans +=arr1[i];
		}
		else
		{
			if(first==false)
			{
				ans += arr1[i];
				first = true;
			}
			else
			{
				ans += arr1[i]-1;
			}
		}
	}
	for( int i=0;i<26;i++)
	{
		if(arr2[i]%2==0)
		{
			ans +=arr2[i];
		}
		else
		{
			if(first==false)
			{
				ans += arr2[i];
				first = true;
			}
			else
			{
				ans += arr2[i]-1;
			}
		}
	}
	return ans;
}


int main()
{
	string s;
	cout << "Enter string: ";
	getline(cin,s);
	int len=longestPalindrome(s);
	cout << "The length longest palindrome is: " << len;
	return 0;
}
