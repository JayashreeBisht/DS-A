#include<iostream>
using namespace std;

string columnNumber(int n)
{
	string ans=" ";
	while(n>0)
	{
		char c='A'+(n-1)%26;
		ans=c+ans;
		n=(n-1)/26;
	}
	return ans;
}

int main()
{
	int columnInteger;
	cout << "Enter column number: ";
	cin >> columnInteger;
	string s=columnNumber(columnInteger);
	cout << "The corresponding column title is : " << s;
	return 0;
}
