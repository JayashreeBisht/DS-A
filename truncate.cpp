#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void truncate(string s, int k){
	int c=0;
	string str,temp;
	for(int i=0;i<s.size();i++){
		if(s[i]==' '){
			str+=temp;
			temp="";
			c++;
		}
		if(c==k){
			break;
		}	
		else{
			temp +=s[i];
		}
}
	str+=temp;
	cout << "The final truncated string is: "<< endl;
	cout << str;
}
int main(){
	string str;
	cout << "Enter the string: ";
	getline(cin,str);
	int k;
	cout << "Enter the value to truncate: ";
	cin>>k;
	truncate(str,k);
	return 0;
}
