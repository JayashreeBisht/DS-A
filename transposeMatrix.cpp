#include<iostream>
using namespace std;

int main()
{
	int mat[100][100],tmat[100][100],n,m,i,j;
	cout << "Enter the row: ";
	cin >> n;
	cout << "Enter the column: ";
	cin >> m;
	cout << "Enter the elements: ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin >> mat[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			tmat[j][i]=mat[i][j];
		}
	}
	cout << "The transpose matrix is :" << endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout << tmat[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
