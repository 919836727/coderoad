#include<bits/stdc++.h>
using namespace std;
int cnt=0;

void dfs(int idx,int cur)
{
	//idx:��ǰҪ���ǵĵ�����cur����ѡ���Ƶĸ��� 
	if(cur==13)
	{
	cnt++;
	return ;
	} 
	
	if(cur>13)
	return ;
	
	if(idx>13)
	return ;
	
	for(int i=0;i<=4;++i)
	dfs(idx+1,cur+i);
}
int main()
{
    dfs(1,0);
    cout<<cnt<<endl;
    return 0;
}
