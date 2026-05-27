//Q1 sum till range with indexing 1(Prefix sum) very important
//
//
//

/*intituion

1,2,3,4,5
prefix sum=1,3,6,10
prefix[i]=prefix[i-1]+arr[i]
L=1,R=3
Range Sum=Prefix[R]+prefix[L-1]=6-0=6
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int prefix[n];
	for(int i=1;i<=n;i++)
	{  prefix[0]=0;
		prefix[i]=prefix[i-1]+arr[i-1];//prefix[i-1]+arr[0];
	}
	int l,r;
	cin>>l>>r;
	int sum=prefix[r]-prefix[l-1];
	cout<<sum;
	
}
