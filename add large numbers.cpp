#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string add(string a,string b)
{
	int c=0;
	string ans=" ";
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
		c=sum>9?1:0;
		if(c==0)
		{
			ans+=to_string(sum);
		}
		else
		{
			ans+=to_string(sum%10);
		}
	}
	if(c)
	{
		ans+=c+'0';
	}
	reverse(ans.begin(),ans.end());
	return ans;
}

int main()
{
	string a,b;
	cout << "Enter two strings: ";
	cin >> a >> b;
	string sum=add(a,b);
	cout << "Binary addition is: " << sum;
	return 0;
}
