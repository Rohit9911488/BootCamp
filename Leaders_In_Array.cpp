//Q Leaders in Array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	int j;
	cin>>n;
	vector<int>vec(n);
	vector<int>res;
	for(int i=0;i<n;i++)
	{
		cin>>vec[i];
	}
	for(int i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(vec[i]<vec[j])
			{
				break;
			}
		}
		if(j==n)
		{
			res.push_back(vec[i]);
		}
	}
	for(int i=0;i<res.size();i++){
	
	cout<<res[i]<<" ";
}
	
}
