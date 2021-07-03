#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void perimeter(int mat[][20],int n)
{
	int peri=0,i,j;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(mat[i][j]==0)
			{
				continue;
			}
			peri+=4;
			if(mat[i-1][j]==1)
			{
				peri--;
			}
			if(mat[i+1][j]==1)
			{
				peri--;
			}
			if(mat[i][j-1]==1)
			{
				peri--;
			}
			if(mat[i][j+1]==1)
			{
				peri--;
			}
		}
	}
	cout << "The perimeter of road is: ";
	cout << peri;
}

int main()
{
	int mat[20][20],n;
	cout << "Enter size: ";
	cin >> n;
	cout << "Enter matrix elements: ";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> mat[i][j];
		}
	}
	perimeter(mat,n);

	return 0;
}
