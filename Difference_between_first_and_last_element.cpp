//Difference between last and first element of array
#include<iostream>
#include<vector>
using namespace std;
int main()
{   int n;
    int d=0;
    cin>>n;
	vector<int>vec(n);
	for(int i=0;i<n;i++)
	{
		cin>>vec[i];
	}
	for(int i=0;i<n;i++)
	{
	 d=vec[0]-vec[n-1];	
	}
	cout<<d;
	}
	
