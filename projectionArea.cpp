#include<iostream>
#include<algorithm>
using namespace std;

void projectionArea(int arr[][10], int n)
{
	int ans=0,row,col;
	for(int i=0;i<n;i++)
	{
		row=0;
		col=0;
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]>0)
			{
				ans++;
			}
	
			col = max(col,arr[i][j]);
			row= max(row,arr[j][i]);
		}
		ans += row+col;
	}
	cout << "The projectio area of 3D shape is: " << ans;	
}


int main()
{
	int n,i,grid[10][10];
	cout << "Enter the size: ";
	cin >> n;
	cout << "Enter elements: ";
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> grid[i][j];
	    }
	}
	
	projectionArea(grid,n);
	return 0;
}
