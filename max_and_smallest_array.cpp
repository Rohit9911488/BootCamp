//Q1 Find Largest and smallest element from array
#include<iostream>
using namespace std;
#include<vector>
int main()
{   
	int n;
	int max=0;
	int min=0;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	{
	   cin>>arr[i];	
	   min=arr[0];
	}
	for(int i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"Largest element is"<<max<<"Smallest element is"<<min;
	
	
}
