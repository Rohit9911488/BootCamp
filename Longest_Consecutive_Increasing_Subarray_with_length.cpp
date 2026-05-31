#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{   int n;
   cin>>n;
	vector<int>nums(n);
	vector<int>res;
	vector<int>longer;
	int answer=1;
	int length=1;
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
	res.push_back(nums[0]);
	longer=res;
	for(int i=1;i<n;i++)
	{
		if(nums[i-1]<nums[i])
		{
			length++;
			res.push_back(nums[i]);
		}
		else{
			length=1;
			res.clear();
			res.push_back(nums[i]);
		}
		if(length>answer)
		{
			answer=length;
			longer=res;
		}
		
		
	}
	for(int i=0;i<longer.size();i++)
	{
		cout<<longer[i];
	}
	cout<<"Length is"<<answer;
	
}
