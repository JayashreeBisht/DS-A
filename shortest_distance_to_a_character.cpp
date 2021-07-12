#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

vector<int> distance(string s, char c)
{
	vector <int> freq;
	vector<int> res(s.length()); 
	for(int i=0;i<s.length();i++)
	{
		if(s[i] == c)
		{
			freq.push_back(i);
		}
	}
	int min;
	vector<int> dis(freq.size());
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==c)
		{
			res[i]=0;
		}
		else
		{
			for(int j=0;j<freq.size();j++)
			{
				dis[j] = abs(freq[j]-i);
			}
			min = dis[0];
			for(int k=1;k<dis.size();k++)
				{
					if(dis[k]<min)
					{
						min = dis[k];
					}
				}
				res[i]=min;	
		}
	}
	return res;
}


int main()
{
	string s;
	cout << "Enter string: ";
	getline(cin,s);
	char c;
	cout << "Enter the character: ";
	cin >> c;
	vector<int> v=distance(s,c);
	cout << "The distance for each character is: ";
	for(int i=0;i<v.size();i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}
