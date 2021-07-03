#include<iostream>
using namespace std;

void shift(int arr[][10] , int n, int m , int r, int c)
{
	int i,j,a[n*m],p=0,res[r][c];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			a[p] = arr[i][j];
			p++;
		}
	}
	p=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			res[i][j] = a[p++];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout << res[i][j] << " ";
		}
		cout << "\n";
	}
}


int main()
{
	int n,m,i,j,arr[10][10],r,c;
	cout << "Enter the size: ";
	cin >> n >> m;
	cout << "Enter the elements: ";
	for(i=0;i<n;i++) 
	{
		for(j=0;j<m;j++) 
		{
			cin >> arr[i][j];
		}
	}
	cout << "Enter row and columns: ";
	cin>> r >> c;
	if((r*c)!=n*m) 
	{
		cout << "enter valid inputs - even matrix ";
	}
	shift(arr,n,m,r,c);
	return 0;
}
