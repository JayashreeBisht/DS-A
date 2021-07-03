#include<iostream>
using namespace std;

void rangeSum(int arr[], int n, int num[][10], int m)
{
	int ar[n+1],r1,r2,i;
	ar[0] = 0;
	for(i=1;i<=n;i++){
		ar[i] =ar[i-1] + arr[i-1];
	}
	for(i=0;i<m;i++)
	{
		r1 = num[i][0];
		r2 = num[i][1];
		int c = ar[r2+1]-ar[r1];
		cout << c << " ";
	}		
}


int main()
{
	int i,j,k,n,arr[10],m,num[10][10];
	cout << "Enter the size: ";
	cin >> n;
	cout << "Enter the elements: ";
	for(k=0;k<n;k++)
	{
		cin >> arr[k];
	}
	cout << "Enter the range size: ";
	cin >> m;
	cout << "Enter the range elements: ";
	for(i=0;i<m;i++)
	{
		for(j=0;j<2;j++)
		{
			cin >> num[i][j];
		}
	}
	rangeSum(arr,n,num,m);
	return 0;
}
