//Reverse each row of Matrix
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int r,c;
	cin>>r>>c;
	vector<vector<int> > arr(r,vector<int>(c));
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<r;i++)
	{
		reverse(arr[i].begin(),arr[i].end());
	}
	cout<<"\nReversed Matrix:\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
