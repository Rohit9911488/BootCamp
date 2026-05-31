//Q2 Rotate Matrix by 90 degree
//Today we need to study transpose

#include<iostream>
using namespace std;
int main()
{
	int n;
	int n2;
	cin>>n;
	cin>>n2;
	int matrix[n][n2];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n2;j++)
		{
			cin>>matrix[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n/2;j++)
		{
			int temp=matrix[i][j];
			matrix[i][j]=matrix[i][n-j-1];
			matrix[i][n-j-1]=temp;
			cout<<matrix[i][j];
		}
	}
}




















