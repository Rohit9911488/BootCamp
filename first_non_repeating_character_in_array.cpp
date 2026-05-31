//First non Repeating Character
//I am doing this using unordered map because i want to do something unique taking help from ai and google
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{unordered_map<char,int>p;  
string s;
   cin>>s;
   for(char ch:s)
   {
   	p[ch]++;
   }
	for(char ch:s)
	{
		if(p[ch]==1)
		{
			cout<<ch;
		}
	}
}
