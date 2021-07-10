#include<iostream>
using namespace std;

bool anagram(string s, string t)
{
	int n = s.length(),i;
	int m = t.length();
	if(m!=n)
	{
		return false;
	}
	int arr[26];
	for(i=0;i<26;i++)
	{
		arr[i]=0;
	}
	for(i=0;i<n;i++)
	{
		arr[s[i]-'a']++;
	
	}
	for(i=0;i<m;i++)
	{
		arr[t[i]-'a']--;
	}
	for(i=0;i<26;i++)
	{
		if(	arr[i] != 0)
		{
			return false;
		}
	}
	return true;
}


int main()
{
	string s, t;
	cout << "Enter strings: ";
	cin >> s >> t;
	bool ans = anagram(s,t);
	cout << boolalpha << ans;
	return 0;
}
