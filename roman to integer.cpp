#include<iostream>
#include<string>
using namespace std;

int values(char ch)
{
	switch(ch)
	{
		case 'I':
			return 1;
			break;
		case 'V':
			return 5;
			break;
		case 'X':
			return 10;
			break;
		case 'L':
			return 50;
			break;
		case 'C':
			return 100;
			break;
		case 'D':
			return 500;
			break;
		case 'M':
			return 1000;
			break;
		default :
			return 0;	
	}
}

int main()
{
	string s;
	cout << "Enter string: ";
	getline(cin,s);
	int n=s.length();
	int res=0;
	for(int i=0;i<n;i++)
	{
		if(values(s[i])<values(s[i+1]))
		{
			res+=values(s[i+1])-values(s[i]);
			i++;
		}
		else
		{
			res+=values(s[i]);
		}
	}
	cout << "The integer value of roman no is: " << res;
	return 0;
}
