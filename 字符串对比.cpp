#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10];
	int i=0,flag=1,n1,n2;
    scanf("%s",&s1);
    scanf("%s",&s2);
	n1=strlen(s1);
    n2=strlen(s2);
	if(n1!=n2)
	printf("1");
	

	if(n1==n2)
	{  
	       
	if(strcmp(s1,s2)==0) 
	{
	printf("2");
	}
	
	else if(strcmp(strupr(s1),strupr(s2))==0)
	{
	printf("3");
	}
	else
	printf("4");
	
}
    return 0;
}

    
