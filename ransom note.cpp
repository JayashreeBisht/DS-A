#include<iostream>
#include<string>
using namespace std;

bool check(string magazine, string ransomNote)
{
	if(ransomNote == " ")
	{
		return true;
	}
	int found = magazine.find(ransomNote);
	if(found != string::npos)
	{
		return true;
	}
	return false;
}


int main()
{
	string magazine,ransomNote;
	cout << "Enter magazine: ";
	getline(cin,magazine);
	cout << "Enter ransomnote: ";
	getline(cin,ransomNote);
	bool c =check(magazine,ransomNote);
	cout << boolalpha << c;
	return 0;
}
