#include<iostream>
using namespace std;

void highest(int num[],int n)
{
	bool res[n];
	int max=num[0],i,extra;
	cout << "Enter extra toffees :";
	cin >> extra; 
	for(i=0;i<n;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if((num[i]+extra)>=max)
		{
			res[i]=true;
		}
		else
		{
			res[i]=false;
		}
	}
	cout << "The highest no of toffees kid have are: ";
	for(i=0;i<n;i++)
	{
		cout << res[i];
	}
}

int main()
{
    int num[20];
    int n,i;
    cout << "enter size: ";
    cin >> n;
    cout << "Enter array elements: ";
    for(i=0;i<=n-1;i++)
    {
    	cin >> num[i];
	}

	highest(num,n); 
    return 0;
}
