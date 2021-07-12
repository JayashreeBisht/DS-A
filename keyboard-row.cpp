#include<iostream>
#include<vector>
using namespace std;

vector<string> keyboard(string s[], int n)
{
	int arr[26];
	vector <string>res;
	arr[0]=2;arr[1]=3;arr[2]=3;arr[3]=2;arr[4]=1;arr[5]=2;arr[6]=2;arr[7]=2;arr[8]=1;
	arr[9]=2;arr[10]=2;arr[11]=2;arr[12]=3;arr[13]=3;arr[14]=1;arr[15]=1;arr[16]=1;arr[17]=1;
	arr[18]=2;arr[19]=1;arr[20]=1;arr[21]=3;arr[22]=1;arr[23]=3;arr[24]=1;arr[25]=3;
	for(int i=0;i<n;i++)
	{
		int temp = arr[tolower(s[i][0])-97];
		int freq =0;
		for(int j=1;j<s[i].length();j++)
		{
			if(temp!=arr[tolower(s[i][j])-97])
			{
				freq=1;
				break;
			}
		}
		if(freq==0)
		{
			res.push_back(s[i]);
		}
	}
	return res;
}

int main()
{
	string words[100];
	int n,i;
	cout << "Enter size: ";
	cin >> n;
	cout << "Enter string:";
	for(i=0;i<n;i++)
	{
		cin >> words[i];
	}
	vector<string> res = keyboard(words,n);
	for(i=0;i<res.size();i++)
	{
		cout << res[i] << " ";
	}
	return 0;
}
