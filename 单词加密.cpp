#include<stdio.h> 
#include<string.h>
int main()
{
	char a[101],len,i;
	scanf("%s",a);
	len=strlen(a); 
	for(i=0;i<len;i++)
	{
		a[i]=(a[i]-97+3)%26+97;
	}
	printf("%s",a);
	return 0;
}

