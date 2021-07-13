#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void decTobase(int n, int b)
{
    if (n == 0)
    {
    	return;
	}    
    int r = n % b;
    n /= b;
    if (r < 0)
    {
    	n += 1;
	}     
    decTobase(n, b);
    cout << r < 0 ? r + (b * -1) : r;
    return;
}
int main()
{
    int n,b;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the base: ";
    cin >> b;
    if (n != 0)
    {
        decTobase(n, b);
    }
    else
    {
    	cout << "0" ;
	}
    return 0;
}
