#include<iostream>
#include<vector>
//#include<a>//
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<vector<int> >vec(n,vector<int>(n));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>vec[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
		
			if(i%2==0)
			{
				vec[i][j]=vec[i][j]*-1;
				//cout<<vec[i][j];
			}
	}	}
	
	//Reverse
	/*for(int i=0;i<n;i++)
	{
	for(int j=i;j<n;j++)
	{
		int t=vec[i][j];
		vec[i][j]=vec[j][i];
		vec[j][i]=t;
		}	
	}*/
	for(int i=0;i<n/2;i++)
	{
		
		vector<int> t=vec[i];
			vec[i]=vec[i][n-i-1];
			vec[i][n-i-1]=t;
		}
	


for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		cout<<vec[i][j]<<"  ";
	}
	cout<<endl;
}

}
/*
33
1 2 3 
4 5 6
7 8 9
*/

/*
-7 -8 -9
 4  5   6
-1 -2  -3
*/

