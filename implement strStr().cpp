#include<iostream>
#include<string>
using namespace std;

int strStr(string s,string n)
{
	if(n == " ")
	{
		return 0;
	}
	int found=s.find(n);
	if(found != string::npos)
	{
		return found;
	}
	return -1;
}

int main()
{
	string haystack,needle;
	cout << "Enter string: ";
	getline(cin,haystack);
	cout << "Enter needle: ";
	getline(cin,needle);
	int pos=strStr(haystack,needle);
	cout << "The index of needle is: " << pos;
	return 0;
}
