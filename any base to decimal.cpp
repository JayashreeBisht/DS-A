#include<iostream>
using namespace std;

int baseTodec(int num, int base)
{
	int ans=0;
	int m=1;
	while(num>0)
	{
		ans = ans+num%10*m;
		m = m*base;
		num/=10;
		
	}
	return ans;
}


int main()
{
	int num,base;
	cout << "Enter number: ";
	cin >> num;
	cout << "Enter base: ";
	cin >> base;
	cout << baseTodec(num,base);
	return 0;
}
