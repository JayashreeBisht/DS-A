#include<iostream>
using namespace std;

void weakHospital(int arr[][100], int n, int m, int k)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[j][i]==0)
			{
				if( i>0 && arr[j][i-1]==1  && k>0 )
				{
					cout << j << " ";
					k--;
				}
				else if(i==0)
				{
					cout << j << " ";
					k--;
				}
			}
		}
	}
}


int main()
{
	int n,m,i,j,hosp[100][100],k;
	cout << "Enter row and column: ";
	cin >> m >> n;
	cout << "Enter elements: ";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> hosp[i][j];
		}
	}
	cout << "Enter no. of weakest to find: ";
	cin >> k;
	weakHospital(hosp,n,m,k);
	return 0;
}
