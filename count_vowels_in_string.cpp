#include<iostream>
#include<string>
using namespace std;

bool vowel(char ch)
{
	ch=toupper(ch);
	return(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
}
int main()
{   int c=0;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(vowel(s[i]))
		{
			c++;
		}
	}
	cout<<"Number of vowels are"<<c;
	
}
