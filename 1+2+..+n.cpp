#include<stdio.h>

int main()
{ 
	long long sum,n;
	scanf("%I64d",&n);
    sum=(n*(n+1))/2;
	printf("%I64d",sum);
	return 0;
}
/*long long sum(long long n)
{
	if(n==1)
	return 1;
	else
	return sum(n-1)+n;
}
*/
