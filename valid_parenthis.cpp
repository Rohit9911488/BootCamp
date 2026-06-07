//Valid Parenthesis Problem

#include<iostream>
#include<stack>
using namespace std;

 bool isvalid(string s)
 {
 	stack<char>st;
 	for(char c:s)
 	{
 		if(c=='('||c=='['||c=='{')
 		{
 			st.push(c);
		 }
		 else if(c==')'||c==']'||c=='}')
		 {
		 	if(st.empty())
		 	{
		 		return false;
			 }
			 char top=st.top();
			 if((c==')'&&top!='(')||
			 (c=='}'&&top!='{')||
			 (c==']'&&top!='[')){
			 	return false;
			 }
			 st.pop();
		 }
	 }
	 return st.empty();
 }
 
 int main()
 {
 	string s;
 	cin>>s;
 	cout<<(isvalid(s)?"true":"false");
 }
