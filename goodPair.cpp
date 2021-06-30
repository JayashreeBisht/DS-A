#include<iostream>
using namespace std;

int goodPair(int num[],int n)
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(num[i]==num[j])
			{
				c++;
			}
		}
	}
	return c;
}


int main()
{
    int num[20];
    int n,i,j;
    cout << "enter size: ";
    cin >> n;
    cout << "Enter array elements: ";
    for(i=0;i<=n-1;i++)
    {
    	cin >> num[i];
	}

    int pair = goodPair(num,n);
 
 	cout << "The number of good pairs are:";
    cout << pair;
 
    return 0;
}
