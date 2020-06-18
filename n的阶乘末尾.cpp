#include<iostream>
using namespace std;
int fac(int n)
{
	for(int a=n-1;a>0;a--)
	n=n*a;
	
	return n;
}
int main()
{
	int n,x,count=0;
	cin>>n;
	x=fac(n);

      while(1){
		if(x%10==0)
{
     	count++;
		x/=10;
		}
		else
		break;
	}

		cout<<count;
		return 0;
 } 
