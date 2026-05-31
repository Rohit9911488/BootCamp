#include<iostream>
using namespace std;
int main()
{   int n,n1;
    int sum=0;
    int sum1=0;
    cin>>n;
    int arr[n][n];
	for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		cin>>arr[i][j];
	}
}
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				sum=sum+arr[i][j];
			}
			if((i+j)==(n-1))
			{
				sum1=sum1+arr[i][j];
			}
		}
	}
	
	
	
	cout<<"Sum of righ diagonal is"<<sum;
	cout<<"sum of left diagonal is"<<sum1;
	
	
	
	
	
	
	
	
	
}
