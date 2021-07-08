#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int> > rotate(vector<vector<int> > mat)
{
	for(int i=0 ;i<mat.size();i++)
	{
		for(int j=0;j<mat.size();j++)
		{
			swap(mat[i][j],mat[j][i]);
		}
	}
	for(int i=0;i<mat.size();i++)
	{
		reverse(mat[i].begin(),mat[i].end());
	}
	return mat;
}


bool solve(vector<vector<int> > mat, vector<vector<int> > target, int n )
{
	int k=4,i,j;
	while(k--)
	{
		mat = rotate(mat);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(mat[i][j] == target[i][j])
				{
					return true;
				}
			}
		}
	}
	return false;
}


int main()
{
	int n,i,j;
	int e1,e2;
	cout << "Enter size: ";
	cin >> n;
	vector<vector<int> > mat(n), target(n);
	cout << "Enter elements: ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> e1;
			mat[i].push_back(e1);
		}
	}
	cout << "Enter target elements: ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>e2;
			target[i].push_back(e2);
		}
	}
	bool res=solve(mat, target , n);
	cout << boolalpha;
	cout << res;
}
