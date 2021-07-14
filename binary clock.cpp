#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<bitset>
using namespace std;

int main()
{
	int n;
	vector<string> time;
	cout << "Enter number: ";
	cin >> n;
	for(int i=0;i<12;i++)
	{
		bitset<4> hour(i);
		for(int j=0;j<60;j++)
		{
			bitset<6> minute(j);
			if(hour.count()+minute.count()==n)
			{
				string hr=to_string(i);
				string mn=(j<10)?":0" : ":";
				mn=mn+to_string(j);
				time.push_back(hr+mn);
			}
		}
	}
	cout << "The time is: ";
	for(int i=0;i<time.size();i++)
	{
		cout << time[i] << endl;
	}
	return 0;
}
