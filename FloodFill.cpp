#include<iostream>
using namespace std;

void solve(int china[][10], int n, int m, int sr, int sc, int newcolor, int c)
{
	if(sr>n || sr<0 || sc<0 || sc>m)
	{
		return;
	}
	else if(china[sr][sc]!=c)
	{
		return;
	}
	china[sr][sc] = newcolor;
	solve(china,n,m,sr,sc+1,newcolor,c);
	solve(china,n,m,sr+1,sc,newcolor,c);
	solve(china,n,m,sr,sr-1,newcolor,c);
	solve(china,n,m,sr-1,sc,newcolor,c);
}


void flood_fill(int china[][10], int n, int m, int sr, int sc, int newcolor)
{
	int i,j;
	int c = china[sr][sc];
	solve(china,n,m,sr,sc,newcolor,c);
	cout << "The result is: " << endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout << china[i][j] << " ";
		}
		cout << endl;
	}
}


int main()
{
	int n,m,china[10][10],i,j;
	int sr, sc, newColor;
	cout << "Enter row and column: ";
	cin >> n >> m;
	cout << "Enter the elements: ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin >> china[i][j];
		}
	}
	cout << "Enter the first element and replacement: ";
	cin >> sr >> sc >> newColor;
	flood_fill(china,n,m,sr,sc,newColor);
	return 0;
}
