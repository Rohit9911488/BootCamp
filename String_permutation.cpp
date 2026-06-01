//Permutation of String

//Q Find Next Permutation Of String Homework
#include<iostream>
#include<algorithm>
//#include<String>
using namespace std;
int main()
{
	string str;
	cin>>str;
	sort(str.begin(),str.end());
	do
	{
		cout<<str<<endl;
	}
	while(next_permutation(str.begin(),str.end()));
	return 0;
}
