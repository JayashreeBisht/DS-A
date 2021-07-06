#include<iostream>
using namespace std;
void specialNumber(int arr[][100], int m, int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		int max  = INT_MIN;
		int min = INT_MAX;
		for(j=0;j<m;j++)
		{
			if(arr[i][j]<min)
			{
				min = arr[i][j];
				k=j;
			}
		}
		for(j=0;j<m;j++)
		{
			if(arr[j][k]>max)
			{
				max = arr[j][k];
			}
		}
		if(min==max)
		{
			cout << "The special number is: " << min;
			break;
		}
		
	}
}


int main()
{
	int n,m,i,j,arr[100][100];
	cout << "Enter row and column: ";
	cin >> m >> n;
	cout << "Enter elements: ";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> arr[i][j];
		}
	}
	specialNumber(arr,m,n);
	return 0;
}
