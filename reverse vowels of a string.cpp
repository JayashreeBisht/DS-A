#include<iostream>
using namespace std;

bool isvowel(char ch)
{
	return(ch=='a'|| ch=='e'|| ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
}

string reverseVowel(string s)
{
	int n = s.length();
	int l =0, r=n-1;
	while(l<r)
	{
		if(isvowel(s[l]) && isvowel(s[r]))
		{
			swap(s[l],s[r]);
			l++;
			r--;
		}
		else if(!isvowel(s[l]))
		{
			l++;
		}
		else if(!isvowel(s[r]))
		{
			r--;
		}		
	}
	return s;
}

int main()
{
	string s;
	cout << "Enter string: ";
	getline(cin,s);
	string rev=reverseVowel(s);
	cout << "The reverse is: " << rev;
	return 0;
}
