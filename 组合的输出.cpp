#include<bits/stdc++.h>
using namespace std;
int a[25],i,j,r,n;
bool vis[25];
void dfs(int dep)                    //һ���������� 
{                                   //return false������ִֹ�У�return ������ֹ����ִ�� 

	for(int i=a[dep-1]+1;i<=n;++i)
	{
		if(!vis[i])
		{
			a[dep]=i;
			if(dep==r)
			{
			for(j=1;j<=r;++j)
			printf("%3d",a[j]);
			cout<<endl;
		}
		else
		dfs(dep+1);
		vis[i]=0;
	} 
}
}
int main()
{
		cin>>n>>r;
		memset(a,0,sizeof(a));
		memset(vis,false,sizeof(vis));
		dfs(1);

	return 0;
}
