#include<iostream>
#include<vector>
#include<set>
using namespace std;

int morseCode( vector<string>& v, string arr[] , int n)
{
	set<string> s;
	for( int j=0;j<n;j++)
	{
		string w = v[j];
		string t ="";
		for(int i=0;i<w.size();i++)
		{
			t += arr[w[i]-97];
		}
		s.insert(t);
	}
	return s.size();
}


int main()
{
	vector<string> words ;
	string arr[26]= {  ".-","-...", ".--...","-..",".",".-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-","..-.","...","-","..-","...-",".--","-..-","-.--","--.."};
	int i,n;
	string word;
	cout << "Enter vector size: ";
	cin >> n;
	for(i=0;i<n;i++)
	{
		cout << "Enter string: ";
		cin >> word;
		words.push_back(word);
	}
	int c = morseCode(words,arr,n);
	cout << "The no. of different transformations are: ";
	cout << c;
	return 0;
}
