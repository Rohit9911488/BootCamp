//Q Check if 2 strings are anagram

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string st1;
	string st2;
	int flag=0;
	cin>>st1;
	cin>>st2;
	sort(st1.begin(),st1.end());
	sort(st2.begin(),st2.end());
	for(int i=0;i<st1.length();i++)
	{
		for(int j=0;j<st2.length();j++)
		{
			if(st1[i]==st2[j])
			{   flag=1;
				
			}
		}
	}
	if(flag==1)
	{
		cout<<"Anagram";
	}
	else
	{
		cout<<"Not Anagram";
	}
}
