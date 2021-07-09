#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string addBinary(string a,string b)
{
	int c=0;
	string s=" ";
	int n=a.length()-1;
	int m=b.length()-1;
	while(n>=0 || m>=0)
	{
		int sum=c;
		if(n>=0)
		{
			sum+=a[n]-'0';
			n--;
		}
		if(m>=0)
		{
			sum+=b[m]-'0';
			m--;
		}
		c=sum>1 ?1:0;
		s+=((sum%2)?"1":"0");
	}
	if(c)
	{
		s+=((c)?"1":"0");
	}
	reverse(s.begin(),s.end());
	return s;
}

int main()
{
	string a,b;
	cout << "Enter two strings: ";
	cin >> a >> b;
	string sum=addBinary(a,b);
	cout << "Binary addition is: " << sum;
	return 0;
}


