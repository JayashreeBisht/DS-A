#include<iostream>
using namespace std;

void flip_image(int mat[][10], int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=n/2;j--)
		{
			temp = mat[i][n-1-j];
			mat[i][n-1-j] = mat[i][j];
			mat[i][j] = temp;
		}
	}
	cout << "The final output is: " << endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			mat[i][j] = 1- mat[i][j];
			cout << mat[i][j];
		}
		cout << endl;
	}
}

int main()
{
	int n,mat[10][10],i,j;
	cout << "Enter the size: ";
	cin >> n;
	cout << "Enter elements: ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> mat[i][j];
		}
	}
	
	flip_image(mat,n);
	return 0;
}
