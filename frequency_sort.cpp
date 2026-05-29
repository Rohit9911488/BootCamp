#include<iostream>
#include <unordered_map>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{   unordered_map<int,int>f;
	int n;
	cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
    	cin>>vec[i];
	}
	for(int x : vec)
{
    f[x]++;
    
}
sort(vec.begin(),vec.end(),[&](int n0,int n1){
	if(f[n0]!=f[n1])
	{
		return f[n0]<f[n1];
	}
	else
	{
		return n1<n0;
	}
});
for(int i=0;i<n;i++){

cout<<vec[i];
}
}
