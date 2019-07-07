#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

long long sum=0;
long long ans=-1;

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		sum+=a;
		sum=max((long long)(0),sum);
		ans=max(sum,ans);
	}
	cout<<ans<<endl;
	return 0;
}

