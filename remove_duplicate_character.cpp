//Remove Duplicate Character
#include<iostream>
#include<String>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int index=0;
	for(int i=0;i<s.length();i++)
	{   int j;
		for(j=0;j<i;j++)
		{
			if(s[i]==s[j])
			{
				break;
			}
		}
			if(j==i)
			{
				s[index++]=s[i];
			}
	}
	//s[index]='\0';
	//s.resize(index);
	for(int i=0;i<index;i++)
	{
		cout<<s[i];
	}
	
}
