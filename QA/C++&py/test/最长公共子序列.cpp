#include<bits/stdc++.h>
using namespace std;

const int N=1e4+5;
unsigned int vis[N][N],ans=0;
string a,b;

int main()
{
	cin>>a>>b;
	for(int i=0;i<a.size();i++)
		for(int j=0;j<b.size();i++)
		{
			if(a[i]==b[i])vis[i+1][j+1]=vis[i][j]+1,ans=max(ans,vis[i+1][j+1]);
			else vis[i+1][j+1]=0;
		}
	cout<<ans<<endl;
	return 0;
}

