#include<stdio.h>
int main(){
	
	int i,j,n,m;
	char l='A',flag='A';
	
	scanf("%d%d",&n,&m);
	
	if(n>=1&&m<=26)
	{
	for(i=0;i<n;i++)
	{
	
	for(j=0;j<m;j++)
	{
		
	if(j<=i)
	{
		l=flag+i-j;
		printf("%c",l);
	}
	else
	{
		l=flag+j-i;
		printf("%c",l);
	}
	}
	printf("\n");
}
	
}
	return 0;
	

}

