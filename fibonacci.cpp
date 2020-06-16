#include<bits/stdc++.h>
using namespace std;
/*int fibonacci(int n)
{
	if(n==0||n==1)
	return n;
	else
	return fibonacci(n-2)+fibonacci(n-1);
}
int main()
{
	int a,n;
	cin>>n;
    a=fibonacci(n);
    cout<<a;
}*/
int dpfibo(int n)
{
	int F[50];
	F[1]=F[2]=1;
	for(int i=3;i<=n;i++) 
	F[i]=F[i-1]+F[i-2];
	
	return F[n]; 
}
int main()
{
	int n;
	scanf("%d",&n);
	cout<<dpfibo(n);
	return 0;
}
