#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getValue(char c)
{
	switch(c)
	{
		case '(':return 1;break;
		case ')':return -1;break;
		case '{':return 2;break;
		case '}':return -2;break;
		case '[':return 3;break;
		case ']':return -3;break;
		default :return 0;
	}
}


bool check(string s,int n)
{
	stack<int> st;
	int i,v,temp;
	int flag=1,c=0;
	for(i=0;i<n;i++)
	{
		v=getValue(s[i]);
		if(v>0)
		{
			st.push(v);
			c+=v;
		}
		else
		{
			if(!st.empty())
			{
				temp=st.top();
				st.pop();
				if(abs(temp)==abs(v))
				{
					c+=v;
					continue;
				}
				else
				{
					flag=2;
					break;
				}
			}
			c-=v;
		}
	}
	if(flag==2)
	{
		return false;
	}
	else if(c==0)
	{
		return true;
	}
	return false;
}


int main()
{
	string s;
	cout << "Enter string: ";
	cin >> s;
	int n=s.length();
	bool res=check(s,n);
	if(res==1)
	{
		cout << "Yes valid";
	}
	else
	{
		cout << "Not valid";
	}
	return 0;
}


