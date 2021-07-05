#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void surfaceArea(int grid[][10],int n) 
{
    int res = 0;
    for (int i=0;i<n;i++) 
	{
        for (int j=0;j<n;j++)
		{
            if(grid[i][j]!=0)
                res+= (4*grid[i][j]) + 2;
            if(i>0)
                res-=min(grid[i][j], grid[i-1][j])*2;
            if(j>0)
                res-=min(grid[i][j], grid[i][j-1])*2;
        }
    }
    cout << "The surface area of 3D shape is: " << res;
}

int main()
{
	int grid[10][10],n,i,j;
	cout << "Enter the size: ";
	cin >> n;
	cout << "Enter elements: ";
	for(i=0;i<n;i++)
	{
		for(j=0;i<n;j++)
		{
			cin >> grid[i][j];
		}
	}
	
	surfaceArea(grid,n);
	return 0;
}

