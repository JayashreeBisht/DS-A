#include<iostream>
using namespace std;

bool toeplitz(int arr[][10], int m, int n)
{
	int i,j;
	for(i=1;i<m;i++)
	{
		for(j=1;j<n;j++)
		{
			if(arr[i][j] != arr[i-1][j-1])
			{
				return false;
			}
		}
	}
		return true;
} 


int main()
{
	int n,m,arr[10][10],i,j;
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
	
   bool res = toeplitz(arr,m,n);
   if(res==1)
   {
   		cout << "The matrix is a special matrix";
   }
   else
   {
   		cout << "The matrix is not a special matrix";
   }
   
   return 0;
}
